    .text
    .globl _start
_start:
    # Load dimensions into registers
    li x10, 20          # x10 = M (rows in A)
    li x11, 46          # x11 = K (columns in A / rows in B)
    li x12, 50          # x12 = N (columns in B)

    # Load base addresses of matrices
    la x13, 65536    # x13 = base address of A
    la x14, 1048576    # x14 = base address of B
    la x15, 16777216  # x15 = base address of B_T (transposed B)
    la x16, 268435456    # x16 = base address of C

    # Initialize matrix A with ones
    mv x17, x0          # x17 = i = 0
init_A_loop:
    mul x18, x10, x11       # x18 = M * K
    bge x17, x18, init_A_done  # if i >= M*K, exit loop

    # Compute address of A[i]
    slli x19, x17, 2        # x19 = i * 4 (byte offset)
    add x20, x13, x19       # x20 = &A[i]

    # Store value 1 into A[i]
    li x21, 1
    sw x21, 0(x20)          # Store 1 at A[i]

    addi x17, x17, 1        # i++
    j init_A_loop
init_A_done:

    # Initialize matrix B with ones
    mv x17, x0          # x17 = i = 0
init_B_loop:
    mul x18, x11, x12       # x18 = K * N
    bge x17, x18, init_B_done  # if i >= K*N, exit loop

    # Compute address of B[i]
    slli x19, x17, 2        # x19 = i * 4 (byte offset)
    add x20, x14, x19       # x20 = &B[i]

    # Store value 1 into B[i]
    li x21, 1
    sw x21, 0(x20)          # Store 1 at B[i]

    addi x17, x17, 1        # i++
    j init_B_loop
init_B_done:

    # Transpose matrix B into B_T
    mv x23, x0          # x23 = i = 0
transpose_outer_loop:
    bge x23, x11, transpose_done  # if i >= K, exit outer loop
    mv x24, x0          # x24 = j = 0
transpose_inner_loop:
    bge x24, x12, transpose_outer_loop_inc  # if j >= N, exit inner loop

    # Compute B[i][j]
    mul x25, x23, x12       # x25 = i * N
    add x25, x25, x24       # x25 = i * N + j
    slli x26, x25, 2        # x26 = (i*N + j) * 4
    add x27, x14, x26       # x27 = &B[i][j]
    lw x28, 0(x27)          # x28 = B[i][j]

    # Compute B_T[j][i]
    mul x29, x24, x11       # x29 = j * K
    add x29, x29, x23       # x29 = j * K + i
    slli x30, x29, 2        # x30 = (j*K + i) * 4
    add x31, x15, x30       # x31 = &B_T[j][i]
    sw x28, 0(x31)          # B_T[j][i] = B[i][j]

    addi x24, x24, 1        # j++
    j transpose_inner_loop
transpose_outer_loop_inc:
    addi x23, x23, 1        # i++
    j transpose_outer_loop
transpose_done:

    # Set vector length and element width
    mv x1, x11          # x1 = K (vector length)
    li x2, 2            # x2 = SEW code for 32 bits (assuming '2' is for 32 bits)
    vsetvl x3, x1, x2   # x3 = vsetvl x1, x2; set VL and SEW

    # Matrix multiplication
    mv x4, x0           # x4 = i = 0
mmult_outer_loop:
    bge x4, x10, mmult_done  # if i >= M, exit outer loop

    # Load row A[i] into vector register v1
    mul x5, x4, x11         # x5 = i * K
    slli x6, x5, 2          # x6 = i*K*4 (byte offset)
    add x7, x13, x6         # x7 = &A[i][0]
    vlw.v v1, 0x0(x7)          # Load A[i] into v1

    mv x8, x0           # x8 = j = 0
mmult_inner_loop:
    bge x8, x12, mmult_outer_loop_inc  # if j >= N, exit inner loop

    # Load row B_T[j] into vector register v2
    mul x9, x8, x11         # x9 = j * K
    slli x10, x9, 2         # x10 = j*K*4 (byte offset)
    add x11, x15, x10       # x11 = &B_T[j][0]
    vlw.v v2, 0x0(x11)         # Load B_T[j] into v2

    mm x5, v1, v2           # x5 = dot product of v1 and v2

    # Store result into C[i][j]
    mul x12, x4, x12        # x12 = i * N
    add x12, x12, x8        # x12 = i * N + j
    slli x13, x12, 2        # x13 = (i*N + j) * 4 (byte offset)
    add x14, x16, x13       # x14 = &C[i][j]
    sw x5, 0x0(x14)           # C[i][j] = x5

    addi x8, x8, 1          # j++
    j mmult_inner_loop
mmult_outer_loop_inc:
    addi x4, x4, 1          # i++
    j mmult_outer_loop
mmult_done:

    # Program completed, trigger ebreak
    ebreak
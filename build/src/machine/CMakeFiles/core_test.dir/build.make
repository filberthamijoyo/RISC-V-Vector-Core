# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/filberthamijoyo/Downloads/qtrvsim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/filberthamijoyo/Downloads/qtrvsim/build

# Include any dependencies generated for this target.
include src/machine/CMakeFiles/core_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/machine/CMakeFiles/core_test.dir/compiler_depend.make

# Include the progress variables for this target.
include src/machine/CMakeFiles/core_test.dir/progress.make

# Include the compile flags for this target's objects.
include src/machine/CMakeFiles/core_test.dir/flags.make

src/machine/core_test_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
src/machine/core_test_autogen/timestamp: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target core_test"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /opt/homebrew/bin/cmake -E cmake_autogen /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine/CMakeFiles/core_test_autogen.dir/AutogenInfo.json Release
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /opt/homebrew/bin/cmake -E touch /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine/core_test_autogen/timestamp

src/machine/CMakeFiles/core_test.dir/codegen:
.PHONY : src/machine/CMakeFiles/core_test.dir/codegen

src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o: src/machine/core_test_autogen/mocs_compilation.cpp
src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine/core_test_autogen/mocs_compilation.cpp

src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine/core_test_autogen/mocs_compilation.cpp > CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.i

src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine/core_test_autogen/mocs_compilation.cpp -o CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.s

src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/csr/controlstate.cpp
src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.o -MF CMakeFiles/core_test.dir/csr/controlstate.cpp.o.d -o CMakeFiles/core_test.dir/csr/controlstate.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/csr/controlstate.cpp

src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/csr/controlstate.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/csr/controlstate.cpp > CMakeFiles/core_test.dir/csr/controlstate.cpp.i

src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/csr/controlstate.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/csr/controlstate.cpp -o CMakeFiles/core_test.dir/csr/controlstate.cpp.s

src/machine/CMakeFiles/core_test.dir/core.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/core.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.cpp
src/machine/CMakeFiles/core_test.dir/core.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/machine/CMakeFiles/core_test.dir/core.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/core.cpp.o -MF CMakeFiles/core_test.dir/core.cpp.o.d -o CMakeFiles/core_test.dir/core.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.cpp

src/machine/CMakeFiles/core_test.dir/core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/core.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.cpp > CMakeFiles/core_test.dir/core.cpp.i

src/machine/CMakeFiles/core_test.dir/core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/core.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.cpp -o CMakeFiles/core_test.dir/core.cpp.s

src/machine/CMakeFiles/core_test.dir/core.test.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/core.test.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.test.cpp
src/machine/CMakeFiles/core_test.dir/core.test.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/machine/CMakeFiles/core_test.dir/core.test.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/core.test.cpp.o -MF CMakeFiles/core_test.dir/core.test.cpp.o.d -o CMakeFiles/core_test.dir/core.test.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.test.cpp

src/machine/CMakeFiles/core_test.dir/core.test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/core.test.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.test.cpp > CMakeFiles/core_test.dir/core.test.cpp.i

src/machine/CMakeFiles/core_test.dir/core.test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/core.test.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/core.test.cpp -o CMakeFiles/core_test.dir/core.test.cpp.s

src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/execute/alu.cpp
src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.o -MF CMakeFiles/core_test.dir/execute/alu.cpp.o.d -o CMakeFiles/core_test.dir/execute/alu.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/execute/alu.cpp

src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/execute/alu.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/execute/alu.cpp > CMakeFiles/core_test.dir/execute/alu.cpp.i

src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/execute/alu.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/execute/alu.cpp -o CMakeFiles/core_test.dir/execute/alu.cpp.s

src/machine/CMakeFiles/core_test.dir/instruction.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/instruction.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/instruction.cpp
src/machine/CMakeFiles/core_test.dir/instruction.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/machine/CMakeFiles/core_test.dir/instruction.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/instruction.cpp.o -MF CMakeFiles/core_test.dir/instruction.cpp.o.d -o CMakeFiles/core_test.dir/instruction.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/instruction.cpp

src/machine/CMakeFiles/core_test.dir/instruction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/instruction.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/instruction.cpp > CMakeFiles/core_test.dir/instruction.cpp.i

src/machine/CMakeFiles/core_test.dir/instruction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/instruction.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/instruction.cpp -o CMakeFiles/core_test.dir/instruction.cpp.s

src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/backend/memory.cpp
src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.o -MF CMakeFiles/core_test.dir/memory/backend/memory.cpp.o.d -o CMakeFiles/core_test.dir/memory/backend/memory.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/backend/memory.cpp

src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/memory/backend/memory.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/backend/memory.cpp > CMakeFiles/core_test.dir/memory/backend/memory.cpp.i

src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/memory/backend/memory.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/backend/memory.cpp -o CMakeFiles/core_test.dir/memory/backend/memory.cpp.s

src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache.cpp
src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.o -MF CMakeFiles/core_test.dir/memory/cache/cache.cpp.o.d -o CMakeFiles/core_test.dir/memory/cache/cache.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache.cpp

src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/memory/cache/cache.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache.cpp > CMakeFiles/core_test.dir/memory/cache/cache.cpp.i

src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/memory/cache/cache.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache.cpp -o CMakeFiles/core_test.dir/memory/cache/cache.cpp.s

src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache_policy.cpp
src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o -MF CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o.d -o CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache_policy.cpp

src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache_policy.cpp > CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.i

src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/cache/cache_policy.cpp -o CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.s

src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/frontend_memory.cpp
src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o -MF CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o.d -o CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/frontend_memory.cpp

src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/memory/frontend_memory.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/frontend_memory.cpp > CMakeFiles/core_test.dir/memory/frontend_memory.cpp.i

src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/memory/frontend_memory.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/frontend_memory.cpp -o CMakeFiles/core_test.dir/memory/frontend_memory.cpp.s

src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/memory_bus.cpp
src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.o -MF CMakeFiles/core_test.dir/memory/memory_bus.cpp.o.d -o CMakeFiles/core_test.dir/memory/memory_bus.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/memory_bus.cpp

src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/memory/memory_bus.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/memory_bus.cpp > CMakeFiles/core_test.dir/memory/memory_bus.cpp.i

src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/memory/memory_bus.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/memory/memory_bus.cpp -o CMakeFiles/core_test.dir/memory/memory_bus.cpp.s

src/machine/CMakeFiles/core_test.dir/registers.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/registers.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/registers.cpp
src/machine/CMakeFiles/core_test.dir/registers.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/machine/CMakeFiles/core_test.dir/registers.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/registers.cpp.o -MF CMakeFiles/core_test.dir/registers.cpp.o.d -o CMakeFiles/core_test.dir/registers.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/registers.cpp

src/machine/CMakeFiles/core_test.dir/registers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/registers.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/registers.cpp > CMakeFiles/core_test.dir/registers.cpp.i

src/machine/CMakeFiles/core_test.dir/registers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/registers.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/registers.cpp -o CMakeFiles/core_test.dir/registers.cpp.s

src/machine/CMakeFiles/core_test.dir/predictor.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/predictor.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/predictor.cpp
src/machine/CMakeFiles/core_test.dir/predictor.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/machine/CMakeFiles/core_test.dir/predictor.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/predictor.cpp.o -MF CMakeFiles/core_test.dir/predictor.cpp.o.d -o CMakeFiles/core_test.dir/predictor.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/predictor.cpp

src/machine/CMakeFiles/core_test.dir/predictor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/predictor.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/predictor.cpp > CMakeFiles/core_test.dir/predictor.cpp.i

src/machine/CMakeFiles/core_test.dir/predictor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/predictor.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/predictor.cpp -o CMakeFiles/core_test.dir/predictor.cpp.s

src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/simulator_exception.cpp
src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.o -MF CMakeFiles/core_test.dir/simulator_exception.cpp.o.d -o CMakeFiles/core_test.dir/simulator_exception.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/simulator_exception.cpp

src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/simulator_exception.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/simulator_exception.cpp > CMakeFiles/core_test.dir/simulator_exception.cpp.i

src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/simulator_exception.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/simulator_exception.cpp -o CMakeFiles/core_test.dir/simulator_exception.cpp.s

src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.o: src/machine/CMakeFiles/core_test.dir/flags.make
src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/machineconfig.cpp
src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.o: src/machine/CMakeFiles/core_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.o -MF CMakeFiles/core_test.dir/machineconfig.cpp.o.d -o CMakeFiles/core_test.dir/machineconfig.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/machineconfig.cpp

src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/core_test.dir/machineconfig.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/machineconfig.cpp > CMakeFiles/core_test.dir/machineconfig.cpp.i

src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/core_test.dir/machineconfig.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/machine/machineconfig.cpp -o CMakeFiles/core_test.dir/machineconfig.cpp.s

# Object files for target core_test
core_test_OBJECTS = \
"CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/core_test.dir/csr/controlstate.cpp.o" \
"CMakeFiles/core_test.dir/core.cpp.o" \
"CMakeFiles/core_test.dir/core.test.cpp.o" \
"CMakeFiles/core_test.dir/execute/alu.cpp.o" \
"CMakeFiles/core_test.dir/instruction.cpp.o" \
"CMakeFiles/core_test.dir/memory/backend/memory.cpp.o" \
"CMakeFiles/core_test.dir/memory/cache/cache.cpp.o" \
"CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o" \
"CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o" \
"CMakeFiles/core_test.dir/memory/memory_bus.cpp.o" \
"CMakeFiles/core_test.dir/registers.cpp.o" \
"CMakeFiles/core_test.dir/predictor.cpp.o" \
"CMakeFiles/core_test.dir/simulator_exception.cpp.o" \
"CMakeFiles/core_test.dir/machineconfig.cpp.o"

# External object files for target core_test
core_test_EXTERNAL_OBJECTS =

target/core_test: src/machine/CMakeFiles/core_test.dir/core_test_autogen/mocs_compilation.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/csr/controlstate.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/core.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/core.test.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/execute/alu.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/instruction.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/memory/backend/memory.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/memory/cache/cache.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/memory/cache/cache_policy.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/memory/frontend_memory.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/memory/memory_bus.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/registers.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/predictor.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/simulator_exception.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/machineconfig.cpp.o
target/core_test: src/machine/CMakeFiles/core_test.dir/build.make
target/core_test: /opt/homebrew/lib/QtTest.framework/Versions/A/QtTest
target/core_test: external/libelf/liblibelf.a
target/core_test: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
target/core_test: src/machine/CMakeFiles/core_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable ../../target/core_test"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/machine/CMakeFiles/core_test.dir/build: target/core_test
.PHONY : src/machine/CMakeFiles/core_test.dir/build

src/machine/CMakeFiles/core_test.dir/clean:
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine && $(CMAKE_COMMAND) -P CMakeFiles/core_test.dir/cmake_clean.cmake
.PHONY : src/machine/CMakeFiles/core_test.dir/clean

src/machine/CMakeFiles/core_test.dir/depend: src/machine/core_test_autogen/timestamp
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/filberthamijoyo/Downloads/qtrvsim /Users/filberthamijoyo/Downloads/qtrvsim/src/machine /Users/filberthamijoyo/Downloads/qtrvsim/build /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine /Users/filberthamijoyo/Downloads/qtrvsim/build/src/machine/CMakeFiles/core_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/machine/CMakeFiles/core_test.dir/depend


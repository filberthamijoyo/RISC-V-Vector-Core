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
include src/assembler/CMakeFiles/assembler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/assembler/CMakeFiles/assembler.dir/compiler_depend.make

# Include the progress variables for this target.
include src/assembler/CMakeFiles/assembler.dir/progress.make

# Include the compile flags for this target's objects.
include src/assembler/CMakeFiles/assembler.dir/flags.make

src/assembler/assembler_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
src/assembler/assembler_autogen/timestamp: src/assembler/CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target assembler"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /opt/homebrew/bin/cmake -E cmake_autogen /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler/CMakeFiles/assembler_autogen.dir/AutogenInfo.json Release
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /opt/homebrew/bin/cmake -E touch /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler/assembler_autogen/timestamp

src/assembler/CMakeFiles/assembler.dir/codegen:
.PHONY : src/assembler/CMakeFiles/assembler.dir/codegen

src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o: src/assembler/CMakeFiles/assembler.dir/flags.make
src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o: src/assembler/assembler_autogen/mocs_compilation.cpp
src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o: src/assembler/CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o -MF CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler/assembler_autogen/mocs_compilation.cpp

src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler/assembler_autogen/mocs_compilation.cpp > CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.i

src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler/assembler_autogen/mocs_compilation.cpp -o CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.s

src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.o: src/assembler/CMakeFiles/assembler.dir/flags.make
src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/fixmatheval.cpp
src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.o: src/assembler/CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.o -MF CMakeFiles/assembler.dir/fixmatheval.cpp.o.d -o CMakeFiles/assembler.dir/fixmatheval.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/fixmatheval.cpp

src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/assembler.dir/fixmatheval.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/fixmatheval.cpp > CMakeFiles/assembler.dir/fixmatheval.cpp.i

src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/assembler.dir/fixmatheval.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/fixmatheval.cpp -o CMakeFiles/assembler.dir/fixmatheval.cpp.s

src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.o: src/assembler/CMakeFiles/assembler.dir/flags.make
src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.o: /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/simpleasm.cpp
src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.o: src/assembler/CMakeFiles/assembler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.o"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.o -MF CMakeFiles/assembler.dir/simpleasm.cpp.o.d -o CMakeFiles/assembler.dir/simpleasm.cpp.o -c /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/simpleasm.cpp

src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/assembler.dir/simpleasm.cpp.i"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/simpleasm.cpp > CMakeFiles/assembler.dir/simpleasm.cpp.i

src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/assembler.dir/simpleasm.cpp.s"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler/simpleasm.cpp -o CMakeFiles/assembler.dir/simpleasm.cpp.s

# Object files for target assembler
assembler_OBJECTS = \
"CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/assembler.dir/fixmatheval.cpp.o" \
"CMakeFiles/assembler.dir/simpleasm.cpp.o"

# External object files for target assembler
assembler_EXTERNAL_OBJECTS =

src/assembler/libassembler.a: src/assembler/CMakeFiles/assembler.dir/assembler_autogen/mocs_compilation.cpp.o
src/assembler/libassembler.a: src/assembler/CMakeFiles/assembler.dir/fixmatheval.cpp.o
src/assembler/libassembler.a: src/assembler/CMakeFiles/assembler.dir/simpleasm.cpp.o
src/assembler/libassembler.a: src/assembler/CMakeFiles/assembler.dir/build.make
src/assembler/libassembler.a: src/assembler/CMakeFiles/assembler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/filberthamijoyo/Downloads/qtrvsim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libassembler.a"
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && $(CMAKE_COMMAND) -P CMakeFiles/assembler.dir/cmake_clean_target.cmake
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assembler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/assembler/CMakeFiles/assembler.dir/build: src/assembler/libassembler.a
.PHONY : src/assembler/CMakeFiles/assembler.dir/build

src/assembler/CMakeFiles/assembler.dir/clean:
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler && $(CMAKE_COMMAND) -P CMakeFiles/assembler.dir/cmake_clean.cmake
.PHONY : src/assembler/CMakeFiles/assembler.dir/clean

src/assembler/CMakeFiles/assembler.dir/depend: src/assembler/assembler_autogen/timestamp
	cd /Users/filberthamijoyo/Downloads/qtrvsim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/filberthamijoyo/Downloads/qtrvsim /Users/filberthamijoyo/Downloads/qtrvsim/src/assembler /Users/filberthamijoyo/Downloads/qtrvsim/build /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler /Users/filberthamijoyo/Downloads/qtrvsim/build/src/assembler/CMakeFiles/assembler.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/assembler/CMakeFiles/assembler.dir/depend


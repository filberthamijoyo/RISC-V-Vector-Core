# CMake generated Testfile for 
# Source directory: /Users/filberthamijoyo/Downloads/qtrvsim/src/cli
# Build directory: /Users/filberthamijoyo/Downloads/qtrvsim/build/src/cli
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cli_stalls "/opt/homebrew/bin/cmake" "--build" "." "--target" "cli_test_stalls")
set_tests_properties(cli_stalls PROPERTIES  WORKING_DIRECTORY "/Users/filberthamijoyo/Downloads/qtrvsim/build" _BACKTRACE_TRIPLES "/Users/filberthamijoyo/Downloads/qtrvsim/cmake/TestingTools.cmake;40;add_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;52;add_cli_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;0;")
add_test(cli_asm_error "/opt/homebrew/bin/cmake" "--build" "." "--target" "cli_test_asm_error")
set_tests_properties(cli_asm_error PROPERTIES  WILL_FAIL "TRUE" WORKING_DIRECTORY "/Users/filberthamijoyo/Downloads/qtrvsim/build" _BACKTRACE_TRIPLES "/Users/filberthamijoyo/Downloads/qtrvsim/cmake/TestingTools.cmake;40;add_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;60;add_cli_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;0;")
add_test(cli_modifiers "/opt/homebrew/bin/cmake" "--build" "." "--target" "cli_test_modifiers")
set_tests_properties(cli_modifiers PROPERTIES  WORKING_DIRECTORY "/Users/filberthamijoyo/Downloads/qtrvsim/build" _BACKTRACE_TRIPLES "/Users/filberthamijoyo/Downloads/qtrvsim/cmake/TestingTools.cmake;40;add_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;67;add_cli_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;0;")
add_test(cli_modifiers-pcrel "/opt/homebrew/bin/cmake" "--build" "." "--target" "cli_test_modifiers-pcrel")
set_tests_properties(cli_modifiers-pcrel PROPERTIES  WORKING_DIRECTORY "/Users/filberthamijoyo/Downloads/qtrvsim/build" _BACKTRACE_TRIPLES "/Users/filberthamijoyo/Downloads/qtrvsim/cmake/TestingTools.cmake;40;add_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;74;add_cli_test;/Users/filberthamijoyo/Downloads/qtrvsim/src/cli/CMakeLists.txt;0;")

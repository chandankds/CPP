# CMakeList.txt : CMake project for test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (test "main.cpp" "Complex.h" "Complex.cpp" "IlligalValueException.h" "IlligalValueException.cpp" "Utility.cpp" "Utility.h")

# TODO: Add tests and install targets if needed.

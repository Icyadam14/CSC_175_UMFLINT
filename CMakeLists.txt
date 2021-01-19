# cmake_minimum_required(VERSION <specify CMake version here>)
project(CSC_175_UMFLINT)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_executable(test Unit_1/test.cpp)
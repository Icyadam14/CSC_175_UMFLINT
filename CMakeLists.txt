# cmake_minimum_required(VERSION <specify CMake version here>)
project(CSC_175_UMFLINT)

set(CMAKE_CXX_STANDARD 14)


# other exe
add_executable(main main.cpp)

# Unit 1 exe
add_executable(1_11 Unit_1/1_11.cpp Unit_1/1_11.cpp)
add_executable(1_12 Unit_1/1_12.cpp)
add_executable(1_13 Unit_1/1_13.cpp)
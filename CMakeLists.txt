# cmake_minimum_required(VERSION <specify CMake version here>)
project(CSC_175_UMFLINT)

set(CMAKE_CXX_STANDARD 14)


# other exe
add_executable(main main.cpp)

# Unit 1 exe
add_executable(1_11 Unit_1/1_11.cpp Unit_1/1_11.cpp)
add_executable(1_12 Unit_1/1_12.cpp)
add_executable(1_13 Unit_1/1_13.cpp)

# Unit 2 exe
add_executable(2_25 Unit_2/2_25.cpp)
add_executable(2_26 Unit_2/2_26.cpp)
add_executable(2_27 Unit_2/2_27.cpp)
add_executable(2_28 Unit_2/2_28.cpp)
add_executable(2_29 Unit_2/2_29.cpp)

# Unit 3 exe
add_executable(3_21 Unit_3/3_21.cpp)
add_executable(3_22 Unit_3/3_22.cpp)
add_executable(3_23 Unit_3/3_23.cpp)
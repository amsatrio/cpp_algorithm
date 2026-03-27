cmake_minimum_required(VERSION 3.20)
project(CPP_ALGORITHM)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src/modules/sort)
add_executable(sort_test 
src/modules/sort/sort_test.cpp
src/modules/sort/sort.cpp)

# Testing Configuration
enable_testing()
add_test(NAME SortTest COMMAND sort_test)
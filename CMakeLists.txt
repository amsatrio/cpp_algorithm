cmake_minimum_required(VERSION 3.20)
project(CPP_ALGORITHM)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# sort algorithm
include_directories(src/modules/sort src/modules/util)
add_executable(sort_test 
src/modules/sort/sort_test.cpp
src/modules/sort/sort.cpp
src/modules/partition/partition.cpp
src/modules/util/print.cpp
)

# partition algorithm
include_directories(src/modules/partition src/modules/util)
add_executable(partition_test 
src/modules/partition/partition_test.cpp
src/modules/partition/partition.cpp
src/modules/util/print.cpp
)

# Testing Configuration
enable_testing()
add_test(NAME SortTest COMMAND sort_test)
add_test(NAME PartitionTest COMMAND partition_test)
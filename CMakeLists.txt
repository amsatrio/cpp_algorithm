cmake_minimum_required(VERSION 3.20)
project(CPP_ALGORITHM)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Define a library for all your shared algorithm logic
# This compiles the files ONCE.
add_library(algorithms_lib STATIC
    src/modules/sort/sort.cpp
    src/modules/partition/partition.cpp
    src/modules/search/search.cpp
    src/modules/util/print.cpp
)

# 2. Set up include directories for the library
target_include_directories(algorithms_lib PUBLIC 
    src/modules/sort 
    src/modules/partition 
    src/modules/search 
    src/modules/util
)

# 3. Define Executables
# Now you only list the specific test file, then link the library.

# Sort Test
add_executable(sort_test src/modules/sort/sort_test.cpp)
target_link_libraries(sort_test PRIVATE algorithms_lib)

# Partition Test
add_executable(partition_test src/modules/partition/partition_test.cpp)
target_link_libraries(partition_test PRIVATE algorithms_lib)

# Search Test
add_executable(search_test src/modules/search/search_test.cpp)
target_link_libraries(search_test PRIVATE algorithms_lib)

# Testing Configuration
enable_testing()
add_test(NAME SortTest COMMAND sort_test)
add_test(NAME PartitionTest COMMAND partition_test)
add_test(NAME SearchTest COMMAND search_test)
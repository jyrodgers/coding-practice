# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)
enable_testing()

add_executable(MergeSortedArray MergeSortedArrayTest.cpp)
target_link_libraries(
  MergeSortedArray
  GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(MergeSortedArray)

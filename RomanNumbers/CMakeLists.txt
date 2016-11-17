
cmake_minimum_required(VERSION 2.8.11)
project(RomanNumbers)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(/usr/include/gmock)

add_executable(RomanNumbers
   RomanNumbers.h
   RomanNumbers.cpp
   RomanNumbers_test.cc)
target_link_libraries(RomanNumbers ${GTEST_LIBRARIES} pthread gmock_main gmock)


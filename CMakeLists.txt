cmake_minimum_required(VERSION 3.8)

set(This LeetCode)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(lib/googletest)

set(Headers "src/AddDigits.hpp"
            "src/PowerOfTwo.hpp"
            "src/RemoveDuplicatesFromSortedArray.hpp"
            "src/TwoSum.hpp")
            
set(Sources "src/AddDigits.cpp"
            "src/PowerOfTwo.cpp"
            "src/RemoveDuplicatesFromSortedArray.cpp"
            "src/TwoSum.cpp")

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)

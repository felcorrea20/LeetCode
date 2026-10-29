cmake_minimum_required(VERSION 3.8)

set(This Tests_Leetcode)

set(Sources "Tests_AddDigits.cpp"
            "Tests_PowerOfTwo.cpp"
            "Tests_RemoveDuplicatesFromSortedArray.cpp"
            "Tests_TwoSum.cpp")

add_executable(${This} ${Sources})

target_include_directories(${This} PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(${This} PUBLIC
   gtest_main
   LeetCode
)

add_test(
   NAME ${This}
   COMMAND ${This}
)

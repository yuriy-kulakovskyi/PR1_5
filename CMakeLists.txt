cmake_minimum_required(VERSION 3.14)
project(PR1_5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(../PR1_5/lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR1_5
        main.cpp
        classes/Triangle.cpp
        classes/RightAngled.cpp
)

target_link_libraries(PR1_5)

add_executable(PR1_5_tests
        classes/Triangle.cpp
        tests/tests.cpp
)

target_link_libraries(PR1_5_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR1_5_tests)

cmake_minimum_required(VERSION 3.20)

project(matrixMultiplier
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(matrixMultiplier
    src/main.cpp
    src/matrix.cpp
)

target_include_directories(matrixMultiplier
    PRIVATE
        include
)

enable_testing()

find_package(GTest REQUIRED)

add_executable(matrixTests
    tests/matrix_test.cpp
    src/matrix.cpp
)

target_include_directories(matrixTests
    PRIVATE
        include
)

target_link_libraries(matrixTests
    PRIVATE
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(matrixTests)
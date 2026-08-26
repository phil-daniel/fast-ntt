cmake_minimum_required(VERSION 3.29)

project(FastNTT LANGUAGES CXX)

# ----------------------------
# C++ configuration
# ----------------------------

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native -DNDEBUG")


# ----------------------------
# FastNTT library
# ----------------------------

add_library(FastNTTLib
        src/fastntt.cpp
        src/arithmetic/modular.cpp
        src/arithmetic/power.cpp
        src/number_theory/gcd.cpp
        src/number_theory/extended_gcd.cpp
)

target_include_directories(FastNTTLib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)


# ----------------------------
# Main executable
# ----------------------------

add_executable(FastNTT
        src/main.cpp
)

target_link_libraries(FastNTT
        PRIVATE
        FastNTTLib
)


# ----------------------------
# GoogleTest
# ----------------------------

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()


# ----------------------------
# Tests
# ----------------------------

add_executable(test_modular
        tests/arithmetic/test_modular.cpp
        tests/arithmetic/test_power.cpp
        tests/number_theory/test_gcd.cpp
        tests/number_theory/test_extended_gcd.cpp
)

target_link_libraries(test_modular
        PRIVATE
        FastNTTLib
        GTest::gtest_main
)

include(GoogleTest)

gtest_discover_tests(test_modular)
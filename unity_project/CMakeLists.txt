
cmake_minimum_required(VERSION 3.10)
project(MathUtilsTest C)

set(CMAKE_C_STANDARD 99)

include_directories(include unity test)

set(SRC src/math_utils.c)
set(TEST test/test_math_utils.c)
set(UNITY unity/unity.c)

add_executable(run_tests ${SRC} ${TEST} ${UNITY})

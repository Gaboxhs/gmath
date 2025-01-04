cmake_minimum_required(VERSION 3.10)
project(gmath VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SOURCE_FILES
    ../src/main.cpp
    ../src/Arithmetic/Arithmetic.cpp
    ../src/Constants/Constants.h
    ../src/Algebra/Algebra.cpp
    )

add_executable(main ${SOURCE_FILES})
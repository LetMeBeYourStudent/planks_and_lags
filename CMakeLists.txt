cmake_minimum_required(VERSION 3.2.0)

project(cpp_final_project)

add_executable(planks_and_lines
    planks.cpp
    headers/Calculator.h
    headers/Line.h
    headers/Plank.h
)

target_compile_features(planks_and_lines PUBLIC cxx_std_17)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
    CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(planks_and_lines PRIVATE 
        -g
        -Wall
        -Wextra
        -Werror
        -pedantic
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(guess_number PRIVATE
        /EHsc
        /W4
        /WX
    )
endif()
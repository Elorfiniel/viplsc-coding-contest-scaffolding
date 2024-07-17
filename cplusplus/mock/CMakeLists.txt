cmake_minimum_required(VERSION 3.20.0)

project(coding_test)

add_library(project_compiler_flags INTERFACE)
target_compile_features(project_compiler_flags INTERFACE cxx_std_17)

add_subdirectory(testee)

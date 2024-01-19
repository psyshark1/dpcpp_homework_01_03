cmake_minimum_required (VERSION 3.8)

project (03)
set (CMAKE_CXX_STANDARD 17)

add_executable (03 03.cpp SqlSelectQueryBuilder.cpp SqlSelectQueryBuilder.h SQLException.cpp SQLException.h)
target_compile_features(03 PRIVATE cxx_std_17)

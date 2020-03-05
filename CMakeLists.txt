cmake_minimum_required(VERSION 3.15)
project(pybind_example)

set(CMAKE_CXX_STANDARD 14)


# Find MPI
find_package(MPI REQUIRED)
include_directories(${MPI_CXX_INCLUDE_PATH})
# References :
# 1. https://pybind11.readthedocs.io/en/stable/compiling.html
# 2. https://pybind11.readthedocs.io/en/stable/compiling.html

find_package(pybind11 REQUIRED)
pybind11_add_module(pybind_example src/main.cpp)


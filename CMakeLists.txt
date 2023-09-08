cmake_minimum_required(VERSION 3.15)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

set (source_dir "./src")
file (GLOB source_files "${source_dir}/*.cpp")

add_executable(HelloWorld ${source_files})

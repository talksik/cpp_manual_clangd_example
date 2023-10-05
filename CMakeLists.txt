cmake_minimum_required(VERSION 3.15)

project(HelloWorld)

# compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)

set (source_dir "./src")
file (GLOB source_files "${source_dir}/*.cpp")

add_executable(HelloWorld ${source_files})

file (GLOB header_files "${source_dir}/*.h")
target_include_directories(HelloWorld PUBLIC ${source_dir})


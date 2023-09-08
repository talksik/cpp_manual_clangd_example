cmake_minimum_required(VERSION 3.15)

project(HelloWorld)

# gstreamer-1.0
find_package(PkgConfig REQUIRED)
pkg_check_modules(GST REQUIRED gstreamer-1.0)
include_directories(${GST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

set (source_dir "./src")
file (GLOB source_files "${source_dir}/*.cpp")

add_executable(HelloWorld ${source_files})

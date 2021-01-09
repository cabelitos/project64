cmake_minimum_required(VERSION 3.10)

project(Project64 CXX)

find_package(PkgConfig REQUIRED)

set(PROJECT64_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/../Source)

add_subdirectory(Common)
add_subdirectory(Settings)

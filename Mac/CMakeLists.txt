cmake_minimum_required(VERSION 3.10)

project(Project64 CXX)

find_package(PkgConfig REQUIRED)

set(PROJECT64_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/../Source)

pkg_check_modules(SDL2 REQUIRED sdl2)

add_subdirectory(Common)
add_subdirectory(Settings)
add_subdirectory(3rdParty)
add_subdirectory(Project64-audio)

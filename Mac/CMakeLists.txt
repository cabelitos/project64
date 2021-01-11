cmake_minimum_required(VERSION 3.10)

project(Project64 CXX)

set(CMAKE_CXX_STANDARD 14)

find_package(PkgConfig REQUIRED)
find_package(OpenGL REQUIRED)

set(PROJECT64_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/../Source)
set(PROJECT64_3PARTY_INCLUDE_DIRS ${PROJECT64_INCLUDE_DIRS}/3rdParty)

pkg_check_modules(SDL2 REQUIRED sdl2)

add_subdirectory(Common)
add_subdirectory(Settings)
add_subdirectory(3rdParty)
add_subdirectory(Project64-audio)
add_subdirectory(Project64-core)
add_subdirectory(Project64-video)

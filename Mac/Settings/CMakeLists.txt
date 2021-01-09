cmake_minimum_required(VERSION 3.10)

project(Settings CXX)

set(SETTINGS_SRC_DIR ${PROJECT_SOURCE_DIR}/../../Source/Settings)

set(SETTINGS_FILES ${SETTINGS_SRC_DIR}/Settings.cpp)

include_directories(${PROJECT64_INCLUDE_DIRS})

add_library(Settings_libs STATIC ${SETTINGS_FILES})

cmake_minimum_required(VERSION 3.10)

project(Project64-audio CXX)

set(AUDIO_SRC_DIR ${PROJECT_SOURCE_DIR}/../../Source/Project64-audio)

set(AUDIO_FILES ${AUDIO_SRC_DIR}/Driver/SDLAudio.cpp
  ${AUDIO_SRC_DIR}/Driver/SoundBase.cpp
  ${AUDIO_SRC_DIR}/AudioMain.cpp
  ${AUDIO_SRC_DIR}/AudioSettings.cpp
  ${AUDIO_SRC_DIR}/trace.cpp)

include_directories(${PROJECT64_INCLUDE_DIRS}
  ${SDL2_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR})

link_directories(${SDL2_LIBRARY_DIRS})

configure_file(${PROJECT_SOURCE_DIR}/../../Source/Project64-audio/Version.h.in Version.h COPYONLY)

add_library(Project64-audio_libs SHARED ${AUDIO_FILES})

target_link_libraries(Project64-audio_libs ${SDL2_LIBRARIES}
  Common_libs
  Settings_libs)

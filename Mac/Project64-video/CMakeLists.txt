cmake_minimum_required(VERSION 3.10)

project(Project64-video CXX C)

set(VIDEO_SRC_DIR ${PROJECT_SOURCE_DIR}/../../Source/Project64-video)

set(VIDEO_FILES
  ${VIDEO_SRC_DIR}/3dmath.cpp
  ${VIDEO_SRC_DIR}/Android.cpp
  ${VIDEO_SRC_DIR}/Combine.cpp
  ${VIDEO_SRC_DIR}/Config.cpp
  ${VIDEO_SRC_DIR}/CRC.cpp
  ${VIDEO_SRC_DIR}/Debugger.cpp
  ${VIDEO_SRC_DIR}/DepthBufferRender.cpp
  ${VIDEO_SRC_DIR}/F3DTEXA.cpp
  ${VIDEO_SRC_DIR}/FBtoScreen.cpp
  ${VIDEO_SRC_DIR}/Main.cpp
  ${VIDEO_SRC_DIR}/rdp.cpp
  ${VIDEO_SRC_DIR}/ScreenResolution.cpp
  ${VIDEO_SRC_DIR}/Settings.cpp
  ${VIDEO_SRC_DIR}/TexBuffer.cpp
  ${VIDEO_SRC_DIR}/TexCache.cpp
  ${VIDEO_SRC_DIR}/trace.cpp
  ${VIDEO_SRC_DIR}/turbo3D.cpp
  ${VIDEO_SRC_DIR}/ucode.cpp
  ${VIDEO_SRC_DIR}/ucode00.cpp
  ${VIDEO_SRC_DIR}/ucode01.cpp
  ${VIDEO_SRC_DIR}/ucode02.cpp
  ${VIDEO_SRC_DIR}/ucode03.cpp
  ${VIDEO_SRC_DIR}/ucode04.cpp
  ${VIDEO_SRC_DIR}/ucode05.cpp
  ${VIDEO_SRC_DIR}/ucode06.cpp
  ${VIDEO_SRC_DIR}/ucode07.cpp
  ${VIDEO_SRC_DIR}/ucode08.cpp
  ${VIDEO_SRC_DIR}/ucode09.cpp
  ${VIDEO_SRC_DIR}/ucode09rdp.cpp
  ${VIDEO_SRC_DIR}/ucodeFB.cpp
  ${VIDEO_SRC_DIR}/Util.cpp
  ${VIDEO_SRC_DIR}/Ext_TxFilter.cpp
  ${VIDEO_SRC_DIR}/Renderer/OGLcombiner.cpp
  ${VIDEO_SRC_DIR}/Renderer/OGLgeometry.cpp
  ${VIDEO_SRC_DIR}/Renderer/OGLglitchmain.cpp
  ${VIDEO_SRC_DIR}/Renderer/OGLtextures.cpp
  ${VIDEO_SRC_DIR}/Renderer/Renderer.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxFilterExport.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxFilter.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxCache.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxTexCache.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxHiResCache.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxQuantize.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxUtil.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TextureFilters.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TextureFilters_2xsai.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TextureFilters_hq2x.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TextureFilters_hq4x.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxImage.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxReSample.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/TxDbg.cpp
  ${VIDEO_SRC_DIR}/TextureEnhancer/tc-1.1+/fxt1.c
  ${VIDEO_SRC_DIR}/TextureEnhancer/tc-1.1+/dxtn.c
  ${VIDEO_SRC_DIR}/TextureEnhancer/tc-1.1+/wrapper.c
  ${VIDEO_SRC_DIR}/TextureEnhancer/tc-1.1+/texstore.c)

include_directories(${PROJECT64_INCLUDE_DIRS}
  ${OPENGL_INCLUDE_DIR}
  ${PROJECT64_3PARTY_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR})

configure_file(${PROJECT_SOURCE_DIR}/../../Source/Project64-video/Version.h.in Version.h COPYONLY)

add_library(Project64-video_libs SHARED ${VIDEO_FILES})

target_link_libraries(Project64-video_libs
  ${OPENGL_LIBRARIES}
  Common_libs
  Settings_libs
  png_libs
  zlib_libs)

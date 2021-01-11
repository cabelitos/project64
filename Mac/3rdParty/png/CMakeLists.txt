cmake_minimum_required(VERSION 3.10)

project(png C)

set(PNG_SRC_DIR ${PROJECT_SOURCE_DIR}/../../../Source/3rdParty/png)

set(PNG_FILES ${PNG_SRC_DIR}/png.c
  ${PNG_SRC_DIR}/pngerror.c
  ${PNG_SRC_DIR}/pngget.c
  ${PNG_SRC_DIR}/pngmem.c
  ${PNG_SRC_DIR}/pngpread.c
  ${PNG_SRC_DIR}/pngread.c
  ${PNG_SRC_DIR}/pngrio.c
  ${PNG_SRC_DIR}/pngrtran.c
  ${PNG_SRC_DIR}/pngrutil.c
  ${PNG_SRC_DIR}/pngset.c
  ${PNG_SRC_DIR}/pngtest.c
  ${PNG_SRC_DIR}/pngtrans.c
  ${PNG_SRC_DIR}/pngwio.c
  ${PNG_SRC_DIR}/pngwrite.c
  ${PNG_SRC_DIR}/pngwtran.c
  ${PNG_SRC_DIR}/pngwutil.c)

include_directories(${PNG_SRC_DIR}
  ${PROJECT64_3PARTY_INCLUDE_DIRS})

add_library(png_libs STATIC ${PNG_FILES})

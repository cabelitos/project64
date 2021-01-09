cmake_minimum_required(VERSION 3.10)

project(zlib C)

add_compile_definitions(IOAPI_NO_64)

set(ZLIB_SRC_DIR ${PROJECT_SOURCE_DIR}/../../../Source/3rdParty/zlib)

set(ZLIB_FILES ${ZLIB_SRC_DIR}/adler32.c
  ${ZLIB_SRC_DIR}/compress.c
  ${ZLIB_SRC_DIR}/crc32.c
  ${ZLIB_SRC_DIR}/deflate.c
  ${ZLIB_SRC_DIR}/gzclose.c
  ${ZLIB_SRC_DIR}/gzlib.c
  ${ZLIB_SRC_DIR}/gzread.c
  ${ZLIB_SRC_DIR}/gzwrite.c
  ${ZLIB_SRC_DIR}/infback.c
  ${ZLIB_SRC_DIR}/inffast.c
  ${ZLIB_SRC_DIR}/inflate.c
  ${ZLIB_SRC_DIR}/inftrees.c
  ${ZLIB_SRC_DIR}/trees.c
  ${ZLIB_SRC_DIR}/uncompr.c
  ${ZLIB_SRC_DIR}/zutil.c
  ${ZLIB_SRC_DIR}/contrib/minizip/ioapi.c
  ${ZLIB_SRC_DIR}/contrib/minizip/miniunz.c
  ${ZLIB_SRC_DIR}/contrib/minizip/minizip.c
  ${ZLIB_SRC_DIR}/contrib/minizip/mztools.c
  ${ZLIB_SRC_DIR}/contrib/minizip/unzip.c
  ${ZLIB_SRC_DIR}/contrib/minizip/zip.c)

include_directories(${ZLIB_SRC_DIR})

add_library(zlib_libs STATIC ${ZLIB_FILES})

cmake_minimum_required(VERSION 3.10)

project(Common CXX)

set(COMMON_SRC_DIR ${PROJECT_SOURCE_DIR}/../../Source/Common)

set(COMMON_FILES
  ${COMMON_SRC_DIR}/CriticalSection.cpp
  ${COMMON_SRC_DIR}/DateTimeClass.cpp
  ${COMMON_SRC_DIR}/FileClass.cpp
  ${COMMON_SRC_DIR}/HighResTimeStamp.cpp
  ${COMMON_SRC_DIR}/IniFileClass.cpp
  ${COMMON_SRC_DIR}/LogClass.cpp
  ${COMMON_SRC_DIR}/md5.cpp
  ${COMMON_SRC_DIR}/MemoryManagement.cpp
  ${COMMON_SRC_DIR}/path.cpp
  ${COMMON_SRC_DIR}/Platform.cpp
  ${COMMON_SRC_DIR}/Random.cpp
  ${COMMON_SRC_DIR}/StdString.cpp
  ${COMMON_SRC_DIR}/SyncEvent.cpp
  ${COMMON_SRC_DIR}/Thread.cpp
  ${COMMON_SRC_DIR}/Trace.cpp
  ${COMMON_SRC_DIR}/Util.cpp)

include_directories(${PROJECT64_INCLUDE_DIRS})

add_library(Common_libs STATIC ${COMMON_FILES})
target_link_libraries(Common_libs pthread)

cmake_minimum_required(VERSION 3.12)

# VARIABLES
set(AUTHOR_NAME "Mert Acel")
set(CMAKE_CXX_STANDARD 11)


set(PROJECT_NAME "11_IO_Buffer_Stream_Oriented")
set(BOOST_ROOT "${CMAKE_SOURCE_DIR}/../../boost")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Project Information
project (${PROJECT_NAME} VERSION 1.0.1 DESCRIPTION $PROJECT_NAME)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Information
message(STATUS "AUTHOR_NAME          : ${AUTHOR_NAME}")
message(STATUS "PROJECT_NAME         : ${PROJECT_NAME}")
message(STATUS "CMAKE_SOURCE_DIR     : ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_SYSTEM         : ${CMAKE_SYSTEM}")


find_package(Boost COMPONENTS system filesystem REQUIRED)
MESSAGE("${Boost_LIBRARIES}")

find_package(Threads REQUIRED)
MESSAGE("${CMAKE_THREAD_LIBS_INIT}")

# Set g++ Parameter
set(CMAKE_CXX_FLAGS "-O2 -Wall -Wextra ")

# Include Folders
INCLUDE_DIRECTORIES(${INCLUDE_DIRECTORIES} ${Boost_INCLUDE_DIRS})

# Library Path
LINK_DIRECTORIES(${BOOST_PATH}/lib)

set(SOURCE_FILES src/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME}  ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} )
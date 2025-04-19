cmake_minimum_required(VERSION 3.30)
project(M-GameEngine)

set(CMAKE_CXX_STANDARD 26)

set(SDL3_SHARED OFF CACHE BOOL "" FORCE)
set(SDL3_STATIC ON CACHE BOOL "" FORCE)

find_package(Vulkan REQUIRED)
include_directories(${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/3rdparty/sdl3/include)

add_subdirectory(3rdparty/sdl3)
link_directories(${CMAKE_BINARY_DIR}/3rdparty/sdl3)

add_executable(M-GameEngine
        editor/editorMain.cpp)


target_link_libraries(M-GameEngine PRIVATE Vulkan::Vulkan SDL3)
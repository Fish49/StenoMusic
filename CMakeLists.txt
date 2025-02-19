cmake_minimum_required(VERSION 3.15)
project(StenoMusic)

set(CMAKE_CXX_STANDARD 17)

# Set Raylib paths manually (adjust to your installation)
set(RAYLIB_INCLUDE_DIR "C:/raylib/w64devkit/x86_64-w64-mingw32/include")
set(RAYLIB_LIB_DIR "C:/raylib/w64devkit/x86_64-w64-mingw32/lib")

include_directories(${RAYLIB_INCLUDE_DIR})
link_directories(${RAYLIB_LIB_DIR})

add_executable(StenoLyricsGame main.cpp)
target_link_libraries(StenoLyricsGame raylib winmm gdi32 opengl32)
cmake_minimum_required(VERSION 3.15)
project(StenoMusic)

set(CMAKE_CXX_STANDARD 17)

# Set Raylib paths manually (adjust to your installation)
set(RAYLIB_INCLUDE_DIR "C:/raylib/w64devkit/x86_64-w64-mingw32/include")
set(RAYLIB_LIB_DIR "C:/raylib/w64devkit/x86_64-w64-mingw32/lib")

include_directories(${RAYLIB_INCLUDE_DIR})
link_directories(${RAYLIB_LIB_DIR})

add_executable(StenoMusic src/main.cpp src/Lyrics.cpp)
target_link_libraries(StenoMusic raylib winmm gdi32 opengl32)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/${CMAKE_BUILD_TYPE})
add_custom_command(TARGET StenoMusic POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/assets
    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/assets
)

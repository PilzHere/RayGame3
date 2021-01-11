cmake_minimum_required(VERSION 3.15)
project(RayGame3)

find_package(raylib 3.5.0 REQUIRED)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "debug")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "release")

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-m64 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-m64 -O3")

add_executable(RayGame3 src/main.cpp src/game/Game.cpp src/game/screen/GameScreen.cpp src/game/screen/PlayScreen.cpp)

target_include_directories(RayGame3 PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(RayGame3 raylib)

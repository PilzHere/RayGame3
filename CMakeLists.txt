cmake_minimum_required(VERSION 3.15)
project(RayGame3)

if(UNIX)
    find_package(raylib 3.5.0 REQUIRED)
endif()

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

if(UNIX)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "unix/debug")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "unix/release")
elseif(WIN32)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "windows/debug")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "windows/release")
endif()

if(UNIX)
    set(CMAKE_CXX_FLAGS "-Wall -Wextra")
elseif(WIN32)
    set(CMAKE_CXX_FLAGS "-Wall")
endif()

set(CMAKE_CXX_FLAGS_DEBUG "-m64 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-m64 -O3")

if(WIN32)
    include(FetchContent)

    FetchContent_Declare(
            RAYLIB
            GIT_REPOSITORY "https://github.com/raysan5/raylib"
            GIT_TAG 3.5.0
    )

    FetchContent_GetProperties(RAYLIB)
    if (NOT raylib_POPULATED)
        FetchContent_Populate(RAYLIB)
        add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
    endif ()
endif()

add_executable(RayGame3 src/main.cpp src/game/Game.cpp src/game/screen/GameScreen.cpp src/game/screen/PlayScreen.cpp)

target_include_directories(RayGame3 PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(RayGame3 raylib)

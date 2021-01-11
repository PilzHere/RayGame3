cmake_minimum_required(VERSION 3.15)
project(RayGame3)

# Set C/C++ versions used for compiling.
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

# Set runtime ouput directory depending on OS.
if(UNIX)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "unix/debug")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "unix/release")
elseif(WIN32)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "windows/debug")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "windows/release")
endif()

# Set C++ flags depending on OS.
if(UNIX)
    # -no-pie for making executable file. Else it makes shared library.
    set(CMAKE_CXX_FLAGS "-Wall -Wextra -no-pie")
elseif(WIN32)
    set(CMAKE_CXX_FLAGS "-Wall")
endif()

# Set C++ flags depending on build type.
set(CMAKE_CXX_FLAGS_DEBUG "-m64 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-m64 -O3")

# Download raylib from Github.
include(FetchContent)
FetchContent_Declare(
        RAYLIB
        GIT_REPOSITORY "https://github.com/raysan5/raylib"
        GIT_TAG 3.5.0
)

FetchContent_GetProperties(RAYLIB)
if (NOT raylib_POPULATED)
    FetchContent_Populate(RAYLIB)

    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # Don't build the supplied examples.
    set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # Don't build the supplied games.

    add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
endif ()

# The executable file.
add_executable(RayGame3 src/main.cpp src/game/Game.cpp src/game/screen/GameScreen.cpp src/game/screen/PlayScreen.cpp)

# Extra options deppending on OS.
if(WIN32)
    # Don't display console window when running release.exe.
    target_link_options(RayGame3 PRIVATE "/SUBSYSTEM:WINDOWS" "/ENTRY:mainCRTStartup")
endif()

# Set directories to include (.hpp files folder).
target_include_directories(RayGame3 PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Link target with libraries.
target_link_libraries(RayGame3 raylib)

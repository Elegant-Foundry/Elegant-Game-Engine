cmake_minimum_required(VERSION 3.31)
project(Elegant_Game_Engine LANGUAGES CXX)

option(ENABLE_PHYSICS "Build Physics Module" OFF)
option(ENABLE_AUDIO "Build Audio Module" OFF)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_ASM_STANDARD_REQUIRED ON)

add_subdirectory(Engine/Base)
add_subdirectory(Engine/Memory)
add_subdirectory(Engine/Utility)

if (ENABLE_PHYSICS)
    add_subdirectory(Engine/Modules/Physics)
endif ()

if (ENABLE_AUDIO)
    add_subdirectory(Engine/Modules/Audio)
endif ()

add_subdirectory(Engine/Modules/Graphics)
add_subdirectory(Engine/Managers)
add_subdirectory(Engine/Tools)

add_executable(EditorApp Editor/src/main.cpp)
target_link_libraries(EditorApp PUBLIC
    Base Memory Utility Graphics
    $<$<BOOL:${ENABLE_PHYSICS}>:Physics>
    $<$<BOOL:${ENABLE_AUDIO}>:Audio>
    Managers)
cmake_minimum_required(VERSION 3.31)
project(Elegant_Game_Engine)

set(CMAKE_CXX_STANDARD 26)


include_directories(${PROJECT_SOURCE_DIR}/util)
add_subdirectory(external/glfw)
add_library(glad STATIC external/glad/src/glad.c)
target_include_directories(glad PUBLIC external/glad/include)

include_directories(
        external/glad/include
        external/glfw/include
        src
)

add_executable(Elegant_Game_Engine src/main.cpp
        util/config.h)

target_link_libraries(${PROJECT_NAME}
glfw
glad
${CMAKE_DL_LIBS})
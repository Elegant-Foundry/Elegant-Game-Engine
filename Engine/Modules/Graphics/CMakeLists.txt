add_library(Graphics STATIC
    src/Renderer.cpp
    src/ShaderManager.cpp)

target_include_directories(Graphics PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_link_libraries(Graphics PUBLIC
    Base
    Utility
    Memory)
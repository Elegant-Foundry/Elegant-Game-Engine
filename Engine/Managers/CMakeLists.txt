add_library(Managers STATIC
    src/SceneManager.cpp
    src/InputManager.cpp
    src/GameLoop.cpp)

target_include_directories(Managers PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_link_libraries(Managers PUBLIC
    Base
    Memory
    Utility
    Graphics
        $<$<BOOL:${ENABLE_PHYSICS}>:Physics>
        $<$<BOOL:${ENABLE_AUDIO}>:Audio>
)
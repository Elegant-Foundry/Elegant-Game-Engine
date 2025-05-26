add_executable(EditorApp
    src/main.cpp
    src/EditorUI.cpp
)

target_include_directories(EditorApp
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(EditorApp PUBLIC
    Base
    Memory
    Utility
    Graphics
    Managers
    $<$<BOOL:${ENABLE_PHYSICS}>:Physics>
    $<$<BOOL:${ENABLE_AUDIO}>:Audio>)
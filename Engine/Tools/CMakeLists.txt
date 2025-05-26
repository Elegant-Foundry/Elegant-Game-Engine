add_executable(AssetCompiler
    src/AssetCompilerMain.cpp
    src/ModelConverter.cpp)

target_include_directories(AssetCompiler PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(AssetCompiler PRIVATE
    Base
    Utility)
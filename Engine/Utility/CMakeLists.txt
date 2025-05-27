add_library(Utility STATIC
    src/Logger.cpp
    src/Serializer.cpp)

target_include_directories(Utility PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_link_libraries(Utility PUBLIC
    Base
    Memory)


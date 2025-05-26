add_library(Memory STATIC
    src/Allocator.cpp
    src/PoolAllocator.cpp)

target_include_directories(Memory PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

target_link_libraries(Memory PUBLIC Base)
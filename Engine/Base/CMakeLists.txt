add_library(Base STATIC
    src/Base.cpp
    src/Assert.cpp
    src/MathUtils.cpp)

target_include_directories(Base PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

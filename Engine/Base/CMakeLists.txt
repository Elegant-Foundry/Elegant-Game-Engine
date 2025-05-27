add_library(Base STATIC
    src/Base.cpp
    src/Assert.cpp
        include/MathUtils.hpp
        include/Base.hpp
        Tests/TestAssert.cpp)

target_include_directories(Base PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)


add_executable(TestBaseAssertions
        Tests/TestAssert.cpp
)
target_link_libraries(TestBaseAssertions PRIVATE Base)
set_target_properties(TestBaseAssertions PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Tests
)
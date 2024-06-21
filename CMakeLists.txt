cmake_minimum_required(VERSION 3.25)
project(SDLWrap2)

set(CMAKE_CXX_STANDARD 23)
set(LIBRARY_DIR ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

#add library build target
add_library(SDLWrap2 STATIC
        src/cppSDL.cpp
        src/cppSDL.hpp
        test/test.cpp
        src/cppSDLEvent.cpp
        src/cppSDLEvent.hpp
)

target_link_libraries(SDLWrap2 PRIVATE ${LIBRARY_DIR}/SDL3.dll)

#add test build target
add_executable(LibraryTest test/test.cpp)

target_link_libraries(LibraryTest PRIVATE ${LIBRARY_DIR}/SDL3.dll)

#link lib to test
target_link_libraries(LibraryTest PRIVATE SDLWrap2)

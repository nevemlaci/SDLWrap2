cmake_minimum_required(VERSION 3.25)
project(SDLWrap2)

set(CMAKE_CXX_STANDARD 23)
set(LIBRARY_DIR ${PROJECT_SOURCE_DIR}/lib)
set(LINUX_LIBRARY_DIR ${PROJECT_SOURCE_DIR}/linux/lib)
#message("asd")
message(${PROJECT_BINARY_DIR})

if(GHACTIONS)
    set(ADDEXE 0)
else ()
    set(ADDEXE 1)
endif (GHACTIONS)

include_directories(${PROJECT_SOURCE_DIR}/include)

#add library build target
add_library(SDLWrap2 STATIC
        src/cppSDL.cpp
        src/cppSDL.hpp
        src/cppSDLEvent.cpp
        src/cppSDLEvent.hpp
        src/cppSDLWindow.cpp
        src/cppSDLWindow.hpp
)

set_target_properties(SDLWrap2 PROPERTIES VS_DEBUGGER_ENVIRONMENT "${MY_PATH}")

if(WIN32)
    if(MSVC)
        message("MSVC Detected. Linking against .lib instead of .dll")
        target_link_libraries(SDLWrap2 PRIVATE ${LIBRARY_DIR}/SDL3.lib)
    else ()
        target_link_libraries(SDLWrap2 PRIVATE ${LIBRARY_DIR}/SDL3.dll)
    endif (MSVC)
endif(WIN32)
if(UNIX)
    target_link_libraries(SDLWrap2 PRIVATE ${LIBRARY_DIR}/SDL3.so)
endif(UNIX)

if(ADDEXE)
    #add test build target
    add_executable(LibraryTest test/test.cpp)


    set_target_properties(LibraryTest PROPERTIES VS_DEBUGGER_ENVIRONMENT "${MY_PATH}")

    if(WIN32)
        if(MSVC)
            target_link_libraries(LibraryTest PRIVATE ${LIBRARY_DIR}/SDL3.lib)
        else ()
            target_link_libraries(LibraryTest PRIVATE ${LIBRARY_DIR}/SDL3.dll)
        endif (MSVC)
    endif(WIN32)

    #link lib to test
    target_link_libraries(LibraryTest PRIVATE SDLWrap2)
endif(ADDEXE)
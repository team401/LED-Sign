cmake_minimum_required(VERSION 3.12)
project(LED_Sign)

option(HARDWARE_BUILD "Is this being built for hardware or simulation" OFF)

if (HARDWARE_BUILD)
    add_compile_definitions(LED_SIGN_HARDWARE)
endif()

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
add_subdirectory(lib)

include_directories(include)
file(GLOB_RECURSE SOURCE_FILES
        "include/*.h"
        "src/*.cpp"
        )

add_executable(LED_Sign main.cpp ${SOURCE_FILES})
target_link_libraries(LED_Sign pthread ${OpenCV_LIBS})
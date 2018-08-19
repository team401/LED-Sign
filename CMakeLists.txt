cmake_minimum_required(VERSION 3.12)
project(LED_Sign)

option(HARDWARE_BUILD "Is this being built for hardware or simulation" OFF)

if (HARDWARE_BUILD)
    add_compile_definitions(LED_SIGN_HARDWARE)
endif()

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib)

include_directories(include)
file(GLOB_RECURSE SOURCE_FILES
        "src/*.cpp"
        )

add_executable(LED_Sign main.cpp ${SOURCE_FILES} include/SomeClass.h include/SomeMoreComplicatedClass.h src/SomeMoreComplicatedClass.cpp)
target_link_libraries(LED_Sign pthread)
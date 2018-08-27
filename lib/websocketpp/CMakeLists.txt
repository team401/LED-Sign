project(websocketpp)

if (HARDWARE_BUILD)
    file(GLOB_RECURSE WEBSOCKETPP_SOURCE_FILES
            "websocketpp/websocketpp/*.hpp"
            )

    add_library(websocketpp STATIC ${WEBSOCKETPP_SOURCE_FILES})
    target_include_directories(websocketpp PUBLIC websocketpp)
else()
    add_library(websocketpp INTERFACE)
    target_include_directories(websocketpp INTERFACE websocketpp)
endif()
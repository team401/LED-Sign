project(rpi-rgb-led-matrix)

if (HARDWARE_BUILD)
    file(GLOB_RECURSE RPI-RGB-LED-MATRIX_SOURCE_FILES
            "rpi-rgb-led-matrix/lib/*.cc"
            )

    add_library(rpi-rgb-led-matrix STATIC ${RPI-RGB-LED-MATRIX_SOURCE_FILES})
    target_include_directories(rpi-rgb-led-matrix PUBLIC rpi-rgb-led-matrix/include)
else()
    add_library(rpi-rgb-led-matrix INTERFACE)
    target_include_directories(rpi-rgb-led-matrix INTERFACE rpi-rgb-led-matrix/include)
endif()
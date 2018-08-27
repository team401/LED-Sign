project(wiringpi)

if (HARDWARE_BUILD)
    file(GLOB_RECURSE WIRINGPI_SOURCE_FILES
            "wiringpi/wiringPi/*.c"
            )

    add_library(wiringpi STATIC ${WIRINGPI_SOURCE_FILES})
    target_include_directories(wiringpi PUBLIC wiringpi)
else()
    add_library(wiringpi INTERFACE)
    target_include_directories(wiringpi INTERFACE wiringpi)
endif()
set(NAME SwampLaunchPayload)

add_executable(${NAME}
    main.cpp
    sdReader.cpp
    # NOTE: CMAKE_CURRENT_LIST_DIR here is .../SwampLaunchPayload/src
    # so we need to go up one level to reach lib/
    ../lib/no-OS-FatFS-SD-SPI-RPi-Pico/simple_example/hw_config.c
)

target_link_libraries(${NAME}
    pico_stdlib
    hardware_spi
    hardware_i2c
    hardware_dma
    hardware_pio
    hardware_interp
    hardware_timer
    hardware_watchdog
    hardware_clocks
    FatFs_SPI        # <- from the add_subdirectory in the top-level CMake
)

# Optional UART/USB config
pico_enable_stdio_usb(${NAME} 1)
pico_enable_stdio_uart(${NAME} 0)

# Add include paths
target_include_directories(${NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}  # src/
    # Path where ff.h actually lives, relative to project root:
    ${CMAKE_CURRENT_LIST_DIR}/../lib/no-OS-FatFS-SD-SPI-RPi-Pico/FatFs_SPI/ff15/source
)
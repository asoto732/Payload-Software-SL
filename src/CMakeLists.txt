set(NAME SwampLaunchPayload)

add_executable(${NAME}
    main.cpp
    sdReader.cpp
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
)

# Optional UART/USB config
pico_enable_stdio_usb(${NAME} 1)
pico_enable_stdio_uart(${NAME} 0)

# Add include path for src/
target_include_directories(${NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
)

pico_add_extra_outputs(${NAME})

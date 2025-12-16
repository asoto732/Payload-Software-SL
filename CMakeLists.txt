# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.2.0)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.2.0-a4)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico CACHE STRING "Board type")

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Pico SDK import
include(pico_sdk_import.cmake)

project(SwampLaunchPayload C CXX ASM)

# Init SDK
pico_sdk_init()

# Add the FatFs_SPI library from the no-OS-FatFS repo
add_subdirectory(
    ${CMAKE_CURRENT_LIST_DIR}/lib/no-OS-FatFS-SD-SPI-RPi-Pico/FatFs_SPI
    ${CMAKE_BINARY_DIR}/FatFs_SPI_build
)

# Add src directory (your real code)
add_subdirectory(src)

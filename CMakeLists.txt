cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Pico SDK import
include(pico_sdk_import.cmake)

project(SwampLaunchPayload C CXX ASM)

# Init SDK
pico_sdk_init()

# Add src directory (your real code)
add_subdirectory(src)

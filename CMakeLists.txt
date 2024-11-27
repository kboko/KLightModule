cmake_minimum_required(VERSION 3.20.0)

set (BOARD rpi_pico/rp2040/w)

find_package(Zephyr)
project(KLightModule)
add_subdirectory(drivers)

target_sources(app PRIVATE src/main.c)
target_sources(app PRIVATE src/wlan.c)

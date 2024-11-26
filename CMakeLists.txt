cmake_minimum_required(VERSION 3.20.0)

set (BOARD rpi_pico/rp2040/w)

find_package(Zephyr)
project(my_zephyr_app)

target_sources(app PRIVATE src/main.c)
target_sources(app PRIVATE src/mqtt.c)
target_sources(app PRIVATE src/wlan.c)
target_sources(app PRIVATE src/movement_detection.c)

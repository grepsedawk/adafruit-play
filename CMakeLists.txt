cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(PROJECT_NAME adafruit_test)
project(${PROJECT_NAME})

# TODO: Mega?
set(${CMAKE_PROJECT_NAME}_BOARD megaADK)
set(${CMAKE_PROJECT_NAME}_PORT /dev/ttyUSB0)

set(${CMAKE_PROJECT_NAME}_SKETCH adafruit_test.ino)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libraries)

generate_arduino_firmware(${CMAKE_PROJECT_NAME})

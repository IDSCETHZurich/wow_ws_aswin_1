# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src/SDL2-2.0.20"
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src/SDL2-2.0.20-build"
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2"
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/tmp"
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src/SDL2-2.0.20-stamp"
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src"
  "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src/SDL2-2.0.20-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src/SDL2-2.0.20-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/pi/wow_ws/build/sdl2_vendor/SDL2-2.0.20/src/SDL2-2.0.20-stamp${cfgdir}") # cfgdir has leading slash
endif()

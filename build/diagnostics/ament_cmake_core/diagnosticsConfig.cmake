# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_diagnostics_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED diagnostics_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(diagnostics_FOUND FALSE)
  elseif(NOT diagnostics_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(diagnostics_FOUND FALSE)
  endif()
  return()
endif()
set(_diagnostics_CONFIG_INCLUDED TRUE)

# output package information
if(NOT diagnostics_FIND_QUIETLY)
  message(STATUS "Found diagnostics: 3.2.0 (${diagnostics_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'diagnostics' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT diagnostics_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(diagnostics_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${diagnostics_DIR}/${_extra}")
endforeach()

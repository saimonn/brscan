find_package(PkgConfig)

if(NOT LIBUSB_FOUND)
  pkg_check_modules (LIBUSB_PKG libusb-1.0 libusb)
  find_path(LIBUSB_INCLUDE_DIR NAMES libusb.h
    PATHS
    ${LIBUSB_PKG_INCLUDE_DIRS}
    /usr/include/libusb-1.0
    /usr/include
    /usr/local/include
  )

#standard library name for libusb-1.0
set(libusb1_library_names usb-1.0)

#libusb-1.0 compatible library on freebsd
if((CMAKE_SYSTEM_NAME STREQUAL "FreeBSD") OR (CMAKE_SYSTEM_NAME STREQUAL "kFreeBSD") OR (CMAKE_SYSTEM_NAME STREQUAL "GNU"))
    list(APPEND libusb1_library_names usb)
endif()

  find_library(LIBUSB_LIBRARIES
    NAMES ${libusb1_library_names}
    PATHS
    ${LIBUSB_PKG_LIBRARY_DIRS}
    /usr/lib
    /usr/local/lib
  )

include(CheckFunctionExists)
if(LIBUSB_INCLUDE_DIRS)
    set(CMAKE_REQUIRED_INCLUDES ${LIBUSB_INCLUDE_DIRS})
endif()
if(LIBUSB_LIBRARIES)
    set(CMAKE_REQUIRED_LIBRARIES ${LIBUSB_LIBRARIES})
endif()

CHECK_FUNCTION_EXISTS("libusb_handle_events_timeout_completed" HAVE_LIBUSB_HANDLE_EVENTS_TIMEOUT_COMPLETED)
if(HAVE_LIBUSB_HANDLE_EVENTS_TIMEOUT_COMPLETED)
    add_definitions(-DHAVE_LIBUSB_HANDLE_EVENTS_TIMEOUT_COMPLETED=1)
endif(HAVE_LIBUSB_HANDLE_EVENTS_TIMEOUT_COMPLETED)

CHECK_FUNCTION_EXISTS("libusb_error_name" HAVE_LIBUSB_ERROR_NAME)
if(HAVE_LIBUSB_ERROR_NAME)
    add_definitions(-DHAVE_LIBUSB_ERROR_NAME=1)
endif(HAVE_LIBUSB_ERROR_NAME)

if(LIBUSB_INCLUDE_DIR AND LIBUSB_LIBRARIES)
  set(LIBUSB_FOUND TRUE CACHE INTERNAL "libusb-1.0 found")
  message(STATUS "Found libusb-1.0: ${LIBUSB_INCLUDE_DIR}, ${LIBUSB_LIBRARIES}")
else(LIBUSB_INCLUDE_DIR AND LIBUSB_LIBRARIES)
  set(LIBUSB_FOUND FALSE CACHE INTERNAL "libusb-1.0 found")
  message(STATUS "libusb-1.0 not found.")
endif(LIBUSB_INCLUDE_DIR AND LIBUSB_LIBRARIES)

mark_as_advanced(LIBUSB_INCLUDE_DIR LIBUSB_LIBRARIES)

endif(NOT LIBUSB_FOUND)

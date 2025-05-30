cmake_minimum_required(VERSION 3.1)

project(brscan)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

find_package(Sane REQUIRED)
find_package(LibUSB REQUIRED)

add_library(brscandec SHARED
	libbrscandec/brother_bugchk.c
	libbrscandec/brother_scandec.c
	libbrscandec/brother_chreso.c)
set_target_properties(brscandec PROPERTIES SOVERSION 1)

add_library(sane-brother SHARED
	libsane-brother/brother.c
	libsane-brother/brother_advini.c
	libsane-brother/brother_bugchk.c
	libsane-brother/brother_cmatch.c
	libsane-brother/brother_devaccs.c
	libsane-brother/brother_devinfo.c
	libsane-brother/brother_log.c
	libsane-brother/brother_mfccmd.c
	libsane-brother/brother_misc.c
	libsane-brother/brother_modelinf.c
	libsane-brother/brother_netdev.c
	libsane-brother/brother_scanner.c
	libsane-brother/sane_strstatus.c
	libsane-brother/sanei_config.c
	libsane-brother/sanei_constrain_value.c
	libsane-brother/sanei_init_debug.c)
target_include_directories(sane-brother PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/libbrscandec
	${CMAKE_CURRENT_SOURCE_DIR}/libbrcolm
	${SANE_INCLUDE_DIR}
	${LIBUSB_INCLUDE_DIR})
target_compile_definitions(sane-brother PRIVATE BACKEND_NAME=brother BRSANESUFFIX V_MAJOR=1 V_MINOR=0)
target_link_libraries(sane-brother dl pthread usb ${LIBUSB_LIBRARIES})
set_target_properties(sane-brother PROPERTIES SOVERSION 1)

add_executable(brsaneconfig
        brsaneconfig/brsaneconfig.c)
target_include_directories(brsaneconfig PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/libsane-brother)
target_compile_definitions(brsaneconfig PRIVATE BRSANESUFFIX)
target_link_libraries(brsaneconfig sane-brother)

install(TARGETS brsaneconfig brscandec)
install(TARGETS sane-brother LIBRARY DESTINATION /usr/lib/sane)

install(FILES libbrcolm/GrayCmData/BHminiFB/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/BHminiFB)
install(FILES libbrcolm/GrayCmData/YL4/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/YL4)
install(FILES libbrcolm/GrayCmData/BHL2FB/brmsi06f.bin DESTINATION /usr/share/sane/brother/GrayCmData/BHL2FB)
install(FILES libbrcolm/GrayCmData/ZLe/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/ZLe)
install(FILES libbrcolm/GrayCmData/BHL2/brmsi06.bin DESTINATION /usr/share/sane/brother/GrayCmData/BHL2)
install(FILES libbrcolm/GrayCmData/ZL2FB/brmsl07f.bin libbrcolm/GrayCmData/ZL2FB/brmsl07f.cm DESTINATION /usr/share/sane/brother/GrayCmData/ZL2FB)
install(FILES libbrcolm/GrayCmData/ZL2/brmsl07.bin DESTINATION /usr/share/sane/brother/GrayCmData/ZL2)
install(FILES libbrcolm/GrayCmData/BHLFB/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/BHLFB)
install(FILES libbrcolm/GrayCmData/YL4FB/brlutcm.dat libbrcolm/GrayCmData/YL4FB/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/YL4FB)
install(FILES libbrcolm/GrayCmData/BHL/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/BHL)
install(FILES libbrcolm/GrayCmData/BHMFB/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/BHMFB)
install(FILES libbrcolm/GrayCmData/ZLeFB/brlutcm.dat libbrcolm/GrayCmData/ZLeFB/brmfgray.bin DESTINATION /usr/share/sane/brother/GrayCmData/ZLeFB)

# /usr/bin/install -c -D -t /usr/lib libbrcolm.so.1.0.1 && \
# cd /usr/lib && \
# ln -s -f libbrcolm.so.1.0.1 libbrcolm.so.1
# /usr/bin/mkdir -p '/usr/libexec/brscan'
# /usr/bin/install -c data/setupSaneScan '/usr/libexec/brscan'

install(FILES data/brsanenetdevice.cfg data/Brsane.ini DESTINATION /usr/share/sane/brother)


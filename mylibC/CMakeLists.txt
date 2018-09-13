project(mylibC CXX)

set(SRC private/src/mylibC.cxx)

add_library(mylibC STATIC ${SRC})

target_include_directories(mylibC PUBLIC
 $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/public/include>
 $<INSTALL_INTERFACE:include/libC> )

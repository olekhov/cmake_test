project(mylibA CXX)

set(SRC src/mylibA.cxx)

add_library(mylibA STATIC ${SRC})

target_include_directories(mylibA PUBLIC
 $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
 $<INSTALL_INTERFACE:include/libA> )

target_link_libraries(mylibA mylibC)

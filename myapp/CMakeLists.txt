project(myapp CXX)

set(SRC app.cxx)

add_executable(myapp ${SRC})

target_link_libraries(myapp mylibA)

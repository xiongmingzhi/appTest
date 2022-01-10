project(main)
add_executable(${PROJECT_NAME} main.cpp)
#记住使用这个函数一定要加上公有，否则会报错,而且不要写成target_link_directories
target_include_directories(${PROJECT_NAME} PUBLIC ${subobjects_SOURCE_DIR}/include/)

target_link_libraries(${PROJECT_NAME}
        lib::app1
        lib::app2
        lib::app3
        lib::public1
        lib::public2
        )
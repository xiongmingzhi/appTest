project(public1)
add_library(${PROJECT_NAME} Public1.cpp)
add_library(lib::public1 ALIAS ${PROJECT_NAME})#记住此处需要大写
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
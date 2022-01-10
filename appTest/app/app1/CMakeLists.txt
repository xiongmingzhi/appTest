project(app1)
add_library(${PROJECT_NAME} App1.cpp)
add_library(lib::app1 ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
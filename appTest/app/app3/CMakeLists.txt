project(app3)
add_library(${PROJECT_NAME} App3.cpp)
add_library(lib::app3 ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR} ${subprojects_SOURCE_DIR}/include/)


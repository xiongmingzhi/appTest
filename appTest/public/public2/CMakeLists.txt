project(public2)
add_library(${PROJECT_NAME} Public2.cpp)
add_library(lib::public2 ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
cmake_minimum_required(VERSION 3.1)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
)
set(BASE_LIBRARIES ${BASE_LIBRARIES})

add_executable(test_output test_output.cpp)
target_link_libraries(test_output ${CMAKE_PROJECT_NAME} ${BASE_LIBRARIES})
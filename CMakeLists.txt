cmake_minimum_required(VERSION 3.14)
project(Test)

set(CMAKE_CXX_STANDARD 14)

find_package( OpenCV REQUIRED )

add_executable(Test main.cpp preprocess.cpp preprocess.h pose_estimator.cpp pose_estimator.h flip_flop_optimizer.cpp flip_flop_optimizer.h)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )

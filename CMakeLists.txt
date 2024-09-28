cmake_minimum_required(VERSION 3.28)
project("coding")

set (CMAKE_CXX_STANDARD 11)

add_executable(solution 
	"source/solution.cpp"
)

install(TARGETS solution DESTINATION "${PROJECT_SOURCE_DIR}/bin/")
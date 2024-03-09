cmake_minimum_required(VERSION 3.28.0)

project(my_application VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Animal)

target_sources(Animal
	PUBLIC
		FILE_SET CXX_MODULES FILES
			Animal.ixx
)

add_executable(my_app
	main.cpp
)

target_link_libraries(my_app PRIVATE Animal)


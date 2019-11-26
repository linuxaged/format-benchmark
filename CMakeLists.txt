cmake_minimum_required(VERSION 3.14)

project(format-benchmark)

find_package(benchmark CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(Corrade CONFIG REQUIRED Utility)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE 
	benchmark::benchmark 
	benchmark::benchmark_main
	fmt::fmt 
	fmt::fmt-header-only
	Corrade::Utility
)

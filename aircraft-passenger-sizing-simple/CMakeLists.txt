cmake_minimum_required(VERSION 3.27)
project(aircraft_passenger_sizing_simple)

set(CMAKE_CXX_STANDARD 17)
set(GUROBI_INCLUDE_DIRECTORY "/Library/gurobi1101/macos_universal2/include")
set(GUROBI_LIB_DIRECTORY "/Library/gurobi1101/macos_universal2/lib")

include_directories(${GUROBI_INCLUDE_DIRECTORY})
link_directories(${GUROBI_LIB_DIRECTORY})

add_executable(aircraft_passenger_sizing_simple aircraft-passenger-sizing-simple.cpp ${GUROBI_INCLUDE_DIRECTORY}/gurobi_c++.h)

target_link_libraries(aircraft_passenger_sizing_simple gurobi_c++ gurobi110)

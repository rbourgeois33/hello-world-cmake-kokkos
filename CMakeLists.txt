cmake_minimum_required(VERSION 3.10)

project(HELLO_WORLD_KOKKOS)

# Specify the path to the external libraries
set(KOKKOS_PATH "${PROJECT_SOURCE_DIR}/lib/kokkos")

# Add Kokkos
add_subdirectory(${KOKKOS_PATH})

# Create executable
add_executable(my_program main.cpp)

# Link libraries
target_link_libraries(my_program  Kokkos::kokkos)

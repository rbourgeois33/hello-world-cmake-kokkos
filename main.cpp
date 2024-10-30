#include <Kokkos_Core.hpp>
#include <iostream>

int main(int argc, char* argv[]) {

    // Initialize Kokkos runtime
    Kokkos::initialize(argc, argv);
    
    std::cout<<"Hello World from Kokkos !"<<std::endl;
   
    // Finalize Kokkos runtime
    Kokkos::finalize();

    return 0;
}       


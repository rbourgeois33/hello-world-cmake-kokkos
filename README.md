# hello-world-cmake-kokkos
Template for a cmake-based kokkos project


get kokkos:
git submodule update --init --recursive

in build:
cmake -DKokkos_ENABLE_CUDA=ON -DKokkos_ARCH_AMPERE86=ON ..
(for A5000)
# hello-world-cmake-kokkos
Template for a cmake-based kokkos project


get kokkos:
git submodule update --init --recursive

in build:
```bash
cmake -DKokkos_ENABLE_CUDA=ON -DKokkos_ARCH_AMPERE86=ON -DCMAKE_BUILD_TYPE=Release..
```
(for A5000)

for ada:
```bash
cmake -DKokkos_ENABLE_CUDA=ON -DKokkos_ARCH_ADA89=ON -DCMAKE_BUILD_TYPE=Release ..
```

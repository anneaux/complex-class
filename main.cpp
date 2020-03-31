#include <iostream>

#include "complex.hpp"

int main() {
  using anx::complex;
  complex z1{4, 3};
  complex z2{1, 2};
  std::cout << "z = " << z1 * z2 << "\n";
}

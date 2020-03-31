#pragma once
namespace anx {
struct complex {
  float real;
  float imag;
};

inline std::ostream& operator<<(std::ostream& os, complex z) {
  return os << z.real << " + " << z.imag << "i";
}

inline complex operator+(complex z1, complex z2) noexcept {
  return {z1.real + z2.real, z1.imag + z2.imag};
}

inline complex operator*(complex z1, complex z2) noexcept {
  return {z1.real * z2.real - z1.imag * z2.imag,
          z1.real * z2.imag + z1.imag * z2.real};
}

}  // namespace anx
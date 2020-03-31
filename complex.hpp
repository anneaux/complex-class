#pragma once
namespace anx {

template <typename Real>
struct complex {
  Real real;
  Real imag;
};

template <typename Real>
inline std::ostream& operator<<(std::ostream& os, complex<Real> z) {
  return os << z.real << " + " << z.imag << "i";
}

template <typename Real>
inline complex<Real> operator+(complex<Real> z1, complex<Real> z2) noexcept {
  return {z1.real + z2.real, z1.imag + z2.imag};
}

template <typename Real>
inline complex<Real> operator*(complex<Real> z1, complex<Real> z2) noexcept {
  return {z1.real * z2.real - z1.imag * z2.imag,
          z1.real * z2.imag + z1.imag * z2.real};
}

}  // namespace anx
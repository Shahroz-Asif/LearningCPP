#include <iostream>
#include <complex>

int main() {
  double d1 = 2.3;
  double d2 {2.3};
  double d3 = {2.3};

  std::cout << "Values of d1, d2 and d3 are: " << d1 << ", " << d2 << " and " << d3 << "\n";

  std::complex<double> z = 1;
  std::complex<double> z2 {d1, d2};
  std::complex<double> z3 = {d1, d2};

  std::cout << "Values of z, z2 and z3 are: " << z << ", " << z2 << " and " << z3 << "\n";
}

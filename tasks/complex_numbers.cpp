#include <iostream>

class Complex {
  double real{};
  double imaginary{};

public:
  Complex(): real(0.0), imaginary(0.0) {}

  Complex(double givenReal, double givenImaginary = 0.0): real(givenReal), imaginary(givenImaginary) {}

  Complex add(Complex& otherComplex) {
    return Complex(real + otherComplex.real, imaginary + otherComplex.imaginary);
  }

  Complex add(double givenReal, double givenImaginary = 0.0) {
    return Complex(real + givenReal, imaginary + givenImaginary);
  }

  Complex& addToSelf(Complex& otherComplex) {
    real += otherComplex.real;
    imaginary += otherComplex.imaginary;

    return *this;
  }

  Complex& addToSelf(double givenReal, double givenImaginary = 0.0) {
    real += givenReal;
    imaginary += givenImaginary;

    return *this;
  }

  void print() {
    const bool isImaginaryNegative{ imaginary < 0 };
    const char imaginarySign{ isImaginaryNegative ? '-' : '+' };
    const double imaginaryMagnitude{ isImaginaryNegative ? -imaginary : imaginary };
    std::cout << real << " " << imaginarySign << " " << imaginaryMagnitude << "i\n";
  }
};

int main() {
  Complex a{};
  Complex b{ 1.0 };
  Complex c{ 2.0, 3.0 };
  Complex d{ c };
  Complex e = b;

  std::cout << "BEFORE ADDITION\n";
  a.print();
  b.print();
  c.print();
  d.print();
  e.print();

  Complex f{ b.add(d) };
  c.addToSelf(b);
  a.addToSelf(-5);
  Complex g{ e.add(-10, -15) };

  std::cout << "\nAFTER ADDITION\n";
  a.print();
  b.print();
  c.print();
  d.print();
  e.print();
  f.print();
  g.print();

  return 0;
}


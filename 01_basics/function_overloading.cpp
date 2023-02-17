#include <iostream>

double power(double);
double power(double, double);

double power(double a) {
  return a * a;
}

int main() {
  std::cout << "The square of 4 is " << power(4);
}

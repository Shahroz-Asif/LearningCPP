#include <iostream>

int main() {
  float pi = 3.14;
  int whole_pi = pi;

  std::cout << "Value of pi as float = " << pi << "\n";
  std::cout << "Value of pi as int = " << whole_pi << "\n";
  std::cout << "Narrowing conversions can be avoided by using curly-brace initialization";
}

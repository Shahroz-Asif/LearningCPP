#include <iostream>

int main() {
  int a = 5;

  if (true) {
    int a = 10;

    std::cout << "Value of a inside if: " << a << std::endl;
  }
  std::cout << "Value of a outside if: " << a;
}

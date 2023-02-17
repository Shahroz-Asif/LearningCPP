#include <iostream>

int main() {
  int a = 10;
  float b = 3.14;

  int int_result = a + b;
  float float_result = a + b;

  std::cout << "Summing an int with a float\n";
  std::cout << "Int Result = " << int_result << "\n";
  std::cout << "Float Result = " << float_result << "\n";
}

#include <iostream>

int main() {
  int a = 6;
  int b = 3;

  int sum = a + b;
  int difference = a - b;
  int multiply = a * b;
  int divide = a / b;
  int modulo = a % b;

  std::cout << "Arithmetic Operators\n";
  std::cout << "a + b = " << sum << "\n";
  std::cout << "a - b = " << difference << "\n";
  std::cout << "a * b = " << multiply << "\n";
  std::cout << "a / b = " << divide << "\n";
  std::cout << "a % b = " << modulo << "\n\n";

  bool equal = a == b;
  bool unequal = a != b;
  bool less = a < b;
  bool greater = a > b;
  bool less_equal = a <= b;
  bool greater_equal = a >= b;

  std::cout << "Logical Operators\n";
  std::cout << "a == b: " << equal << "\n";
  std::cout << "a != b: " << unequal << "\n";
  std::cout << "a < b: " << less << "\n";
  std::cout << "a > b: " << greater << "\n";
  std::cout << "a <= b: " << less_equal << "\n";
  std::cout << "a >= b: " << greater_equal << "\n";
  std::cout << "true && false: " << (true && false) << "\n";
  std::cout << "true || false: " << (true || false) << "\n\n";
  std::cout << "!true: " << (!true) << "\n\n";

  int bitwise_and = a & b;
  int bitwise_or = a | b;
  int bitwise_xor = a ^ b;
  int bitwise_not = ~a;

  std::cout << "Bitwise Operators\n";
  std::cout << "a & b: " << bitwise_and << "\n";
  std::cout << "a | b: " << bitwise_or << "\n";
  std::cout << "a ^ b: " << bitwise_xor << "\n";
  std::cout << "~a: " << bitwise_not << "\n\n";

  std::cout << "Assignment Operators\n";
  a += b;
  std::cout << "a += b: " << a << "\n";
  ++a;
  std::cout << "++a: " << a << "\n";
  a -= b;
  std::cout << "a -= b: " << a << "\n";
  --a;
  std::cout << "--a: " << a << "\n";
  a *= b;
  std::cout << "a *= b:" << a << "\n";
  a /= b;
  std::cout << "a /= b: " << a << "\n";
  a %= b;
  std::cout << "a %= b: " << a << "\n";
}

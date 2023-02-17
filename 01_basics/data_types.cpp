#include <iostream>
#include <limits>

int main() {
  int sizeof_char = sizeof(char);
  char letter_a = 'a';

  std::cout << "char is " << sizeof_char << "-bytes or " << sizeof_char * 8 << "-bits long\n"; 
  std::cout << "Letter a = " << letter_a << "\n\n";

  int sizeof_bool = sizeof(bool);
  bool true_bool = true;
  bool false_bool = false;

  std::cout << "bool is " << sizeof_bool << "-bytes or " << sizeof_bool * 8 << "-bits long\n"; 
  std::cout << "True = " << true_bool << "\n";
  std::cout << "False = " << false_bool << "\n\n";

  int sizeof_int = sizeof(int);
  int largest_int = std::numeric_limits<int>::max();
  int smallest_int = std::numeric_limits<int>::min();

  std::cout << "int is " << sizeof_int << "-bytes or " << sizeof_int * 8 << "-bits long\n";
  std::cout << "Largest int = " << largest_int << "\n";
  std::cout << "Smallest int = " << smallest_int << "\n\n";

  int sizeof_float = sizeof(float);
  float largest_float = std::numeric_limits<float>::max();
  float smallest_float = std::numeric_limits<float>::min();

  std::cout << "float is " << sizeof_float << "-bytes or " << sizeof_float * 8 << "-bits long\n";
  std::cout << "Largest float = " << largest_float << "\n";
  std::cout << "Smallest float = " << smallest_float << "\n\n";

  int sizeof_double = sizeof(double);
  double largest_double = std::numeric_limits<double>::max();
  double smallest_double = std::numeric_limits<double>::min();

  std::cout << "double is " << sizeof_double << "-bytes or " << sizeof_double * 8 << "-bits long\n";
  std::cout << "Largest double = " << largest_double << "\n";
  std::cout << "Smallest double = " << smallest_double << "\n\n";

  int sizeof_unsigned = sizeof(unsigned);
  double largest_unsigned = std::numeric_limits<unsigned>::max();
  double smallest_unsigned = std::numeric_limits<unsigned>::min();

  std::cout << "unsigned is " << sizeof_unsigned << "-bytes or " << sizeof_unsigned * 8 << "-bits long\n";
  std::cout << "Largest unsigned = " << largest_unsigned << "\n";
  std::cout << "Smallest unsigned = " << smallest_unsigned << "\n\n";
}

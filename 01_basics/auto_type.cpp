#include <iostream>

int main() {
  auto mybool = false;
  auto myint = 10;
  auto myfloat = 3.14;
  auto mychar = 'a';
  auto mysecondbool {true};

  std::cout << "mybool = " << mybool << std::endl;
  std::cout << "myint = " << myint << std::endl;
  std::cout << "myfloat = " << myfloat << std::endl;
  std::cout << "mychar = " << mychar << std::endl;
  std::cout << "mysecondbool = " << mysecondbool << std::endl;
}

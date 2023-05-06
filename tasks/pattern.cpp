#include <iostream>

void drawCPP(int logoFactor) {
  int logoSize { logoFactor * 2 - 1 };
  int middleIndex { logoFactor - 1 };

  for (int i = 0; i < logoSize; ++i) {

    if (i == middleIndex) {
      std::cout << "C";
      for (int j = 0; j < logoSize + 1; ++j) std::cout << " ";
      for (int j = 0; j < logoSize; ++j) std::cout << "+";

    } else {
      int charCount = i == 0 || i == (logoSize - 1) ? logoFactor : 1;
      int spacesBefore = i < middleIndex ? logoFactor - i - 1 : i - middleIndex;
      int spacesAfter = logoSize - charCount - spacesBefore + middleIndex + 1;

      for (int j = 0; j < spacesBefore; ++j) std::cout << " ";
      for (int j = 0; j < charCount; ++j) std::cout << "C";
      for (int j = 0; j < spacesAfter + 1; ++j) std::cout << " ";
      std::cout << "+";
    }

    std::cout << std::endl;
  }
}

int main() {
  int logoFactor { 0 };
  std::cout << "Enter the logo's height factor: ";
  std::cin >> logoFactor;

  drawCPP(logoFactor);

  return 0;
}


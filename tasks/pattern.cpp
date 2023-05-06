#include <iostream>

void drawCPP(int logoFactor) {
  int logoSize { logoFactor * 2 - 1 };
  int middleIndex { logoFactor - 1 };

  for (int i = 0; i < logoSize; ++i) {
    int letterCount { i == 0 || i == (logoSize - 1) ? logoFactor : 1 };
    int plusCount { i == middleIndex ? logoSize : 1 };
    int spacesBefore { i < middleIndex ? logoFactor - i - 1 : i - middleIndex };
    int spacesAfter { logoSize - letterCount - spacesBefore + 1 };

    if (i != middleIndex) spacesAfter += middleIndex;

    for (int j = 0; j < spacesBefore; ++j) std::cout << " ";
    for (int j = 0; j < letterCount; ++j) std::cout << "C";
    for (int j = 0; j < spacesAfter + 1; ++j) std::cout << " ";
    for (int j = 0; j < plusCount; ++j) std::cout << "+";

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


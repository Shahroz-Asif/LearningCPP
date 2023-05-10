#include <iostream>

void drawCPP(int logoFactor) {
  int logoSize { logoFactor * 2 - 1 };
  int middleIndex { logoFactor - 1 };

  for (int i = 0; i < logoSize; ++i) {
    int letterCount { i == 0 || i == (logoSize - 1) ? logoFactor : 1 };
    int plusCount { i == middleIndex ? logoSize : 1 };
    int spacesBeforeLetter { i < middleIndex ? logoFactor - i - 1 : i - middleIndex };
    int spacesAfterLetter { logoSize - letterCount - spacesBeforeLetter + 1 };
    int spacesAfterPlus { i == middleIndex ? 1 : 2 * logoFactor - 1 };

    if (i != middleIndex) spacesAfterLetter += middleIndex;

    for (int j = 0; j < spacesBeforeLetter; ++j) std::cout << " ";
    for (int j = 0; j < letterCount; ++j) std::cout << "C";
    for (int j = 0; j < spacesAfterLetter; ++j) std::cout << " ";
    for (int j = 0; j < plusCount; ++j) std::cout << "+";
    for (int j = 0; j < spacesAfterPlus; ++j) std::cout << " ";
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


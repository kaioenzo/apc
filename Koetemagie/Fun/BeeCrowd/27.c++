#include <iostream>
#include <utility>

#define ORIGIN 0.0

int main ()
{

  std::pair<double, double> position;

  std::cin >> position.first >> position.second;

  if (position.first == ORIGIN and position.second == ORIGIN) {

    // We are in ORIGIN.
    std::cout << "Origem\n";
    return 0;

  }

  if (position.first == ORIGIN) {

    // We are at line Y.
    std::cout << "Eixo Y\n";
    return 0;

  }

  if (position.second == ORIGIN) {

    // We are at line X.
    std::cout << "Eixo X\n";
    return 0;

  }

  if (position.first < ORIGIN) {

    // We are in Q2 or Q3.
    if (position.second < ORIGIN) {

      // We are in Q3.
      std::cout << "Q3\n";

    } else {

      // We are in Q2.
      std::cout << "Q2\n";

    }

  } else {

    // We are in Q1 or Q4.
    if (position.second < ORIGIN) {

      // We are in Q4.
      std::cout << "Q4\n";

    } else {

      // We are in Q1.
      std::cout << "Q1\n";

    }

  }

}

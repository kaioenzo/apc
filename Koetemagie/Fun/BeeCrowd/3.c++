#include <iostream>

#define PI 3.14159

int main () {

  double R;

  std::cin >> R;

  double A = PI * R * R;

  std::cout.precision(4);

  std::cout << "A=" << std::fixed << A << "\n";

}

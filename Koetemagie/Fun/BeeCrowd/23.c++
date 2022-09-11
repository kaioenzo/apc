#include <iostream>
#include <cmath>

int main ()
{

  double A, B, C;

  std::cin >> A >> B >> C;

  double delta = std::pow(B, 2) - 4.0 * A * C;

  if (delta < 0 || A == 0) {

    std::cout << "Impossivel calcular\n";
    return 0;

  }

  std::cout.precision(5);
  std::cout << std::fixed;

  for (int i = 1, switcher = 1; i <= 2; i++) {

    std::cout << "R" << i << " = " << (-B + switcher * std::sqrt(delta)) / (2.0 * A) << "\n";
    switcher *= -1;

  }

}

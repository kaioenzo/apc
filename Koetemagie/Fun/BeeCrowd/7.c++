#include <iostream>

#define A_WEIGHT 2
#define B_WEIGHT 3
#define C_WEIGHT 5

int main ()
{

  double a, b, c;

  std::cin >> a >> b >> c;

  double average = (a * A_WEIGHT + b * B_WEIGHT + c * C_WEIGHT)/(A_WEIGHT + B_WEIGHT + C_WEIGHT);

  std::cout.precision(1);

  std::cout << "MEDIA = " << std::fixed << average << "\n";

}

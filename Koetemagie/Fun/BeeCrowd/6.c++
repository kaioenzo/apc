#include <iostream>

#define A_WEIGHT 3.5
#define B_WEIGHT 7.5

int main ()
{

  double a, b, average;

  std::cin >> a >> b;

  average = (A_WEIGHT * a + B_WEIGHT * b)/(A_WEIGHT + B_WEIGHT);

  std::cout.precision(5);

  std::cout << "MEDIA = " << std::fixed << average << "\n";

}

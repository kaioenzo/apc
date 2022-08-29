#include <iostream>

int main ()
{
  int distance;
  double spent;

  std::cin >> distance >> spent;

  std::cout.precision(3);

  std::cout << std::fixed << distance / spent << " km/l\n";
}

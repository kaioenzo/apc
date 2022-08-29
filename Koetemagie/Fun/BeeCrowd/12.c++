#include <iostream>

#define PI 3.14159

int main ()
{

  double radius;

  std::cin >> radius;

  double volume = radius * radius * radius * PI * 4.0/3.0;

  std::cout.precision(3);

  std::cout << std::fixed << "VOLUME = " << volume << "\n";

  return 0;

}

#include <iostream>

#define PI 3.14159

int main ()
{

  double a;
  double b;
  double c;

  std::cin >> a >> b >> c;

  std::cout.precision(3);

  std::cout << "TRIANGULO: " << std::fixed << a * c / 2 <<
             "\nCIRCULO: "   << std::fixed << c * c * PI <<
             "\nTRAPEZIO: "  << std::fixed << (a + b) / 2 * c <<
             "\nQUADRADO: "  << std::fixed << b * b <<
             "\nRETANGULO: " << std::fixed << a * b << "\n";

  return 0;
}

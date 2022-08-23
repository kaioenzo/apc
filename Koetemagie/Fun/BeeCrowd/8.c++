#include <iostream>
#include <vector>

struct Difference {

  int a, b, c, d;

};

int main ()
{
  Difference difference;

  std::cin >> difference.a >> difference.b >> difference.c >> difference.d;

  std::cout << "DIFERENCA = " << difference.a * difference.b - difference.c * difference.d << "\n";

}

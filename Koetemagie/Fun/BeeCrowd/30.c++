#include <iostream>

int main ()
{

  int a, b;

  std::cin >> a >> b;

  if (a % b == 0 or b % a == 0)
    std::cout << "Sao Multiplos\n";
  else
    std::cout << "Nao sao Multiplos\n";

}

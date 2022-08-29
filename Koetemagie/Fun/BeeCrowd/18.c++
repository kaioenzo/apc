#include <iostream>
#include <vector>

int main ()
{

  std::vector<unsigned int> notas = { 100, 50, 20, 10, 5, 2, 1 };

  unsigned int money;

  std::cin >> money;

  std::cout << money << "\n";

  for (auto const &nota : notas ) {

    std::cout << money / nota << " nota(s) de R$ " << nota << ",00\n";

    money = money % nota;

  }

}

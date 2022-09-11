#include <iostream>
#include <vector>
#include <utility>

int main ()
{

  unsigned int code, quantity;
  std::cin >> code >> quantity;

  const std::vector<std::pair<const unsigned int, const double>> table = { {1, 4.00}, {2, 4.50}, {3, 5.00}, {4, 2.00}, {5, 1.50} };

  double amount = 0.00;

  std::cout.precision(2);
  std::cout << std::fixed;

  for (const auto & [product, money] : table) {

    if (product == code) {

      amount += money * (double) quantity;
      std::cout << "Total: R$ " << amount << "\n";
      return 0;

    }

  }

}

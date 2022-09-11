#include <iostream>
#include <vector>
#include <utility>
#include <cctype>

int main ()
{

  double money;
  std::cin >> money;

  unsigned int money_int = money * 100;

  std::cout.precision(2);
  std::cout << std::fixed;

  const std::vector<std::pair<const std::string, const std::vector<unsigned int>>> currencies = {

    { "nota",  { 100 * 100, 50 * 100, 20 * 100, 10 * 100, 5 * 100, 2 * 100 } },
    { "moeda", { 100, 50, 25, 10, 5, 1 } },

  };

  for (const auto & [name, currency_list] : currencies) {

    for (const auto & letter : name) std::cout << (char) std::toupper(letter);
    std::cout << "S:\n";

    for (const auto & value : currency_list ) {

      std::cout << money_int / value << " " << name << "(s) de R$ " << (double) (value / 100.00) << "\n";
      money_int %= value;

    }

  }

}

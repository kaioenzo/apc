#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>

int main ()
{

  unsigned int amount, cities = 0;
  unsigned int resident, total;
  unsigned int people;
  unsigned int average_dummy;
  double average;
  bool not_found;

  std::cout.precision(2);
  std::cout << std::fixed;

  std::vector<std::pair<unsigned int, unsigned int>> residents;

  while (std::cin >> amount) {

    if (amount == 0) return 0;
    else if (cities > 0) std::cout << "\n";

    average = 0.00, people = 0;

    for (unsigned int i = 1; i <= amount; ++i) {

      std::cin >> resident >> total;
      average += total;
      people += resident;
      total = std::floor( (double) (total / resident) );

      not_found = true;

      // If total has found before.
      for (auto & [first, second] : residents)
        if (second == total) {
          first += resident;
          not_found = false;
        }

      if (not_found) residents.emplace_back(resident, total);

    }

    std::sort(residents.begin(), residents.end(), [](auto &one, auto &two) -> bool {
      return one.second < two.second;
    });

    std::cout << "Cidade# " << ++cities << ":\n";

    for (const auto & it : residents) {
      std::cout << it.first << "-" << it.second;
      if (it not_eq residents.back()) std::cout << " ";
    }

    average_dummy = average / (double) people * 100.00;
    average = average_dummy / 100.00;

    std::cout << "\nConsumo medio: " << average << " m3.\n";

    residents.clear();

  }

}

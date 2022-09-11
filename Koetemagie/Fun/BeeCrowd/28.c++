#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{

  std::vector<int> numbers = { 0, 0, 0 };

  for (auto & number : numbers)
    std::cin >> number;

  const auto numbers_initial = numbers;

  const auto & begin = numbers.begin(),
             & end   = numbers.end();

  std::sort(begin, end);

  for (auto it = begin; it not_eq end; ++it)
    std::cout << *it << "\n";

  std::cout << "\n";

  for (const auto & item : numbers_initial)
    std::cout << item << "\n";

}

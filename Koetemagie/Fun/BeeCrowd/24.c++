#include <iostream>
#include <utility>
#include <vector>

static const std::vector<std::pair<const double, const double>> intervalos =
{
  {0.0, 25.0}, {25.0, 50.0}, {50.0, 75.0}, {75.0, 100.0},
};

static const auto &start = intervalos.front().first,
           &end   = intervalos.back().second;

int main ()
{

  double input;
  std::cin >> input;

  // 1. See if it's outside our ranges.
  if (input < start or input > end)
  {

    std::cout << "Fora de intervalo\n";
    return 0;

  }

  // 2. See if it's on the first range (which has an unique output).
  else if (input >= start and input <= intervalos[0].second )
  {

    std::cout << "Intervalo [" << start << "," << intervalos[0].second << "]\n";
    return 0;

  }

  // 3. Find out which range it is.
  for (const auto & [inicial, final] : intervalos ) {

    if (input >= inicial and input <= final) {

      std::cout << "Intervalo (" << inicial << "," << final << "]\n";
      return 0;

    }

  }


}

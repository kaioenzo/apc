#include <iostream>
#include <vector>

int main ()
{

  unsigned int seconds;
  std::cin >> seconds;

  const std::vector<unsigned int> times = { 60 * 60, 60 };

  for ( auto const &time : times) {

    std::cout << seconds / time << ":";
    seconds %= time;

  }

  std::cout << seconds << "\n";

}

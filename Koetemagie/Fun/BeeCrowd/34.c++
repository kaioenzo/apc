#include <iostream>
#include <cctype>

int main()
{

  int lines;
  std::cin >> lines >> std::ws;

  std::string line;

  for (int i = 1; i <= lines; ++i)
  {

    std::getline(std::cin, line);

    auto size = line.size();
    auto half = size / 2;
    char letter;
    unsigned int increment;

    for (int i = size - 1; i >= 0; i--) {

      letter = line[(size_t)i];
      increment = 0;

      if (std::isalpha(letter))
        increment += 3;

      if ((half % 2 == 0 and (size_t) i - 1 <= half) || (half % 2 not_eq 0 and (size_t) i <= half - 1))
        --increment;

      if (increment not_eq 0) letter = (char) ((unsigned int) letter + increment);

      std::cout << letter;

    };

    std::cout << "\n";

  }

}

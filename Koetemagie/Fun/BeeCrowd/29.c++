#include <iostream>

int main ()
{

  double lengths[3] = { 0.0, 0.0, 0.0 };

  for (auto & length : lengths)
    std::cin >> length;

  std::cout.precision(1);
  std::cout << std::fixed;

  if (lengths[0] + lengths[1] > lengths[2] and
      lengths[0] + lengths[2] > lengths[1] and
      lengths[1] + lengths[2] > lengths[0])
  {

    std::cout << "Perimetro = " << lengths[0] + lengths[1] + lengths[2];

  } else {

    std::cout << "Area = " << (lengths[0] + lengths[1]) / 2 * lengths[2];

  }

  std::cout << "\n";

}

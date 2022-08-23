#include <iostream>
#include <vector>

struct Product {

  unsigned int units;

  int code;

  double price;

};

int main ()
{

  auto products = { new Product, new Product };

  double total = 0;

  for (auto &product : products) {

    std::cin >> product->code >> product->units >> product->price;

    total += product->units * product->price;

  }

  std::cout.precision(2);

  std::cout << "VALOR A PAGAR: R$ " << std::fixed << total << "\n";

}

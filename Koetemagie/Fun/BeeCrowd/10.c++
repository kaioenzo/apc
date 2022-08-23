#include <iostream>

#define BONUS 0.15

struct Work {

  std::string name;
  double salary, sales;

};

int main ()
{

  Work work;

  std::cin >> work.name >> work.salary >> work.sales;
  std::cin >> work.name >> work.salary >> work.sales;

  double total = work.salary + work.sales * BONUS;

  std::cout.precision(2);

  std::cout << "TOTAL = R$ " << std::fixed << total << "\n";

}

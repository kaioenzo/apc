#include <iostream>

struct Work {

  int number, hours;
  double per_hour;

};

int main ()
{

  Work work;

  std::cin >> work.number >> work.hours >> work.per_hour;

  double total_gain = work.hours * work.per_hour;

  std::cout.precision(2);

  std::cout << "NUMBER = " << work.number << "\n";
  std::cout << "SALARY = U$ " << std::fixed << total_gain << "\n";

}

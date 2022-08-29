#include <iostream>

int main ()
{

  int maior = -1;
  int atual;

  for (int i = 1; i <= 3; i++) {

    std::cin >> atual;

    if (maior < atual) maior = atual;

  }

  std::cout << maior << " eh o maior\n";
  
  return 0;
} 

#include <iostream>

int main ()
{

  std::string name;

  for ( int i = 1; i <= 3; i++ ) {

    std::cin >> name;

    std::cout << name[0];

  }

  std::cout << '\n';


  return 0;
}

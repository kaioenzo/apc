#include <iostream>

int main ()
{

  int A, B, C, D;

  std::cin >> A >> B >> C >> D;


  if ( (  B > C and D > A )    and // 1. If B > C and D > A.
       ( (C + D) > (A + B) )   and // 2. if C + D > A + B.
       ( (C > 0) and (D > 0) ) and // 3. If C > 0 and D > 0.
       ( A % 2 == 0)             // 4. If A is even.
      )
  {
    std::cout << "Valores aceitos\n";
    return 0;
  }

  std::cout << "Valores nao aceitos\n";

}

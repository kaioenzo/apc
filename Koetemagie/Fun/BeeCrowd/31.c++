#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{

  std::vector<double> lengths = { 0.0, 0.0, 0.0 };
  for (auto & length : lengths)
    std::cin >> length;

  std::sort(lengths.rbegin(), lengths.rend());

  const auto & a = lengths.front(),
             & b = lengths[1],
             & c = lengths.back();

  if (a >= b + c) {
    std::cout << "NAO FORMA TRIANGULO\n";
    return 0;
  }
  if (a*a == b*b + c*c)
    std::cout << "TRIANGULO RETANGULO\n";
  if (a*a > b*b + c*c)
    std::cout << "TRIANGULO OBTUSANGULO\n";
  if (a*a < b*b + c*c)
    std::cout << "TRIANGULO ACUTANGULO\n";
  if (a == b and b == c)
    std::cout << "TRIANGULO EQUILATERO\n";
  if ((a == b and b not_eq c) or (b == c and a not_eq c) or (a == c and c not_eq b))
    std::cout << "TRIANGULO ISOSCELES\n";

}

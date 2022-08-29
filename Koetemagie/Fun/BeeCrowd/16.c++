#include <iostream>
#include <cmath>

struct Points {

  double x1;
  double x2;
  double y1;
  double y2;

};

int main ()
{

  Points points;

  std::cin >> points.x1 >> points.y1 >> points.x2 >> points.y2;

  double distance = std::sqrt( std::pow(points.x2 - points.x1, 2) + std::pow(points.y2 - points.y1, 2) );

  std::cout.precision(4);

  std::cout << std::fixed << distance << "\n";
}

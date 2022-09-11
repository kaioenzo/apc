#include <iostream>
#include <map>

int main ()
{

  unsigned int days;
  std::cin >> days;

  std::map<const unsigned int, const std::string> times = {
    { 365, "ano(s)"  },
    { 30,  "mes(es)" },
    { 1,   "dia(s)"  }
  };

  for (auto i = times.rbegin(); i != times.rend(); ++i) {

    std::cout << days / i->first << " " << i->second << "\n";
    days %= i->first;

  }

}

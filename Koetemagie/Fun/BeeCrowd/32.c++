#include <iostream>
#include <cmath>

/**
 * Format the string correctly from input.
 * @param string Which part to format next.
 **/
struct format_input {

  char const *str;

  format_input (char const *in ) : str( in ) {}

  friend std::istream &operator >>
    ( std::istream &s, format_input const &o) {

      for ( char const *p = o.str; *p; ++p) {

        // I. Remove whitespace.
        if (std::isspace(*p))
          std::istream::sentry k(s);

        // II. If failed to find the same characters, stop extracting.
        else if ( s.get() not_eq *p)
          s.setstate(std::ios::failbit);

      }

      return s;

    }

};

constexpr static int find_gcd (int a, int b)
{
  if (b == 0)
     return a;

  return find_gcd(b, a % b);
}

int main()
{

  unsigned int quantity;
  std::cin >> quantity;

  std::string line;

  int a, b, c, d;
  char type;

  int numerator, denominator, greatest_common;
  bool is_negative = false;

  for (unsigned int i = 1; i <= quantity; ++i) {

    std::cin >> a >> format_input(" / ") >> b
             >> format_input(" ") >> type >> format_input(" ")
             >> c >> format_input(" / ") >> d;

    switch (type) {

      default:
      case '+':
        numerator = a * d + b * c;
        denominator = b * d;
        break;
      case '-':
        numerator = a * d - b * c;
        denominator = b * d;
        break;
      case '*':
        numerator = a * c;
        denominator = d * b;
        break;
      case '/':
        numerator = a * d;
        denominator = b * c;
        break;

    }


    greatest_common = find_gcd(numerator, denominator);

    is_negative = numerator < 0 or denominator < 0;

    if (is_negative)
      std::cout << "-";

    std::cout << std::abs(numerator) << "/" << std::abs(denominator) << " = ";

    if (is_negative)
      std::cout << "-";

    std::cout << std::abs(numerator / greatest_common) << "/" << std::abs(denominator / greatest_common) << "\n";

  }

}

#include <iostream>
#include <utility>

struct Grades {

  std::pair<double, const double> A = {0.00, 2.00};
  std::pair<double, const double> B = {0.00, 3.00};
  std::pair<double, const double> C = {0.00, 4.00};
  std::pair<double, const double> D = {0.00, 1.00};

  double prova = 0.00;

};

/**
 * See if student is approved.
 * @param {average} The grade to try out.
 * @return {0, 1, 2} 0 if not approved. 1 if approved. 2 if has to take exam.
 **/
constexpr static unsigned int is_approved (const double & average, const double min, const double max)
{

  if (average < min) {

    std::cout << "Aluno reprovado.\n";
    return 0;

  }

  else if (average > max or min == max) {

    std::cout << "Aluno aprovado.\n";
    return 1;

  }

  return 2;
}

int main ()
{

  Grades grades;
  std::cin >> grades.A.first >> grades.B.first >> grades.C.first >> grades.D.first;

  std::cout.precision(1);
  std::cout << std::fixed;

  double media = (grades.A.first * grades.A.second + grades.B.first * grades.B.second + grades.C.first * grades.C.second + grades.D.first * grades.D.second)
               / (grades.A.second + grades.B.second + grades.C.second + grades.D.second);

  std::cout << "Media: " << media << "\n";

  if (is_approved(media, 5.0, 6.9) == 2) {

    std::cout << "Aluno em exame.\n";
    std::cin >> grades.prova;
    std::cout << "Nota do exame: " << grades.prova << "\n";
    media = (media + grades.prova) / 2;

    is_approved(media, 5.0, 5.0);

    std::cout << "Media final: " << media << "\n";

  }

}

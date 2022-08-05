// #. Para simplificar o calculo no geral.
#include <math.h>

// #. Para teste.
#include <stdio.h>

// @note   Se utilizarmos 'int' para o cálculo, se x for 15, 15 será maior que o máximo de 'int',
//         o que signifca que chegará a um ponto em o que denominador será menor que o numerador,
//         e começará a retornar uma constante, no caso: o máximo de int que é (2^32 - 1).
//         O correto é que devemos utilizar algo que possa guardar 15!, como o tipo 'double'
//         ou 'unsigned long long int'.
//         'int' então começará a conveger para infinito, sendo muito maior do que o valor esperado.
// @param  x   Qual termo da fatorial deve ser calculada.
// @return int A fatorial do número x.
double fatorial (int x) {

  // 1. Na série de Taylor para e^x, 0^0 é definido convenientemente como 1.
  //    Então assumimos que o primeiro termo sempre será 1.
  double resultado = 1;

  // 2. Calcular cada termo da fatorial.
  for (int i = 1; i <= x; i++) resultado *= i;

  // 3. Retornar o resultado.
  return resultado;

}

// @note  A série de taylor.
// @param x Expoente que deve-se elevar o número de Euler.
//          R: Varia-se entre 0 e 15.
// @param n Precisão para o calculo do n-termo da série.
//          R: Varia-se entre 0 e 15.
// @return double Valor da exponeniação da Série de Taylor para e^x.
double exp_natural (int x, int n)
{

  // 1. Assumindo que '1' seŕa sempre constante ao mínimo de e^0, tratamos como extensão.
  double resultado = 1;

  // 2. Para cada termo da série dado por n:
  //    Fazemos a exponenciação de x ao n-index como 'numerador'.
  //    Fazemos a fatorial do n-index como 'denominador'.
  //    Somamos ao 'resultado' como 'numerador' dividido por 'denominador'.
  for (int a = 1; a <= n; a++) resultado += pow(x, a) / fatorial(a);

  // 3. Retornar o resultado.
  return resultado;

}

// #. Para testar o calculo acima.
int main () {

  // 2. O resultado esperado é [ 7.380952 ].
  //    2^0/0! + 2^1/1! + 2^2/2! + 2^3/3! + 2^4/4! + 2^5/5! + 2^6/6! + 2^7/7!
  printf("1. Para x = 2 e n = 7 : [ %lf ]\n", exp_natural(2, 7) );

  // 2. O resultado esperado é [ 16.375000 ].
  //    3^0/0! + 3^1/1! + 3^2/2! + 3^3/3! + 3^4/4!
  printf("2. Para x = 3 e n = 4 : [ %lf ]\n", exp_natural(3, 4) );

  // 3. O resultado esperado é [ 1 | 1 ] indepedente de 'x' ser diferente,
  //    0^0/0! | 15^0/0!
  printf("3. Para x = [0,15] e n = [0,0] : [ %lf | %lf ]\n", exp_natural(0, 0), exp_natural(15, 0) );

  // 4. O resultado esperado é [ 2.718282 | 1857094.691785 ].
  //    O resultado deve converger para [ e^1 = 2.71828... ] e [ e^15 = 3269017.372472 ]
  //    Já que são 15 termos calculados para e^15, convergendo para um número exato.
  //    1^0/0! + 1^1/1! + ... + 1^15/15! | 15^0/0! + 15^1/1! + ... + 15^15/15!
  printf("4. Para x = [1,15] e n = [15,15] : [ %lf | %lf ]\n", exp_natural(1, 15), exp_natural(15, 15) );

  return 0;

}

#include <stdio.h>

int main () {

    char input;
    double number1, number2;
    double answer;

    printf("---------- Caculator ----------\n");
    printf(" 1 | 2 | 3 \n");
    printf(" 4 | 5 | 6 \n");
    printf(" 7 | 8 | 9 \n");
    printf("--------------------\n");

    printf("What kind of calculus: (+) (-) (*) (/):\t\n");
    scanf("%c", &input);

    printf("Number1:\t\n");
    scanf("%lf", &number1);

    printf("Number2:\t\n");
    scanf("%lf", &number2);

    if ( input == '+') answer = number1 + number2, printf("Ans: %.3lf", answer);
    if ( input == '-') answer = number1 - number2, printf("Ans: %.3lf", answer);
    if ( input == '*') answer = number1 * number2, printf("Ans: %.3lf", answer);
    if ( input == '/') {
        
        if ( number1 == 0 && number2 == 0) {
            printf("NULL\n");
            return 1;
        }

        answer = number1 / number2;
        printf("Ans: %.3lf", answer);
    }
    

    return 0;

}

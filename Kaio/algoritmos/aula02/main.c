#include <stdio.h>
#include <stdlib.h>


/* int main começa o programa, é case sensitive*/
int main() {
	char nome[50];
	int idade;
	char sexo;
	float altura;
	double numero_grande;
	
	printf("Informe o nome");
	scanf("%[^\n]s", nome);
	
	printf("Informe a idade: ");
	scanf("%d",&idade);
	
	printf("Informe o sexo");
	scanf(" %c",&sexo);
	
	printf("Informe a altura");
	scanf("%f",&altura);
	
	printf("Infomrme o número");
	scanf("%lf",&numero_grande);
	
	printf("Valores informados\n");
	/*função printf*/
	printf("Nome Informado: %s\n",nome);
	printf("Idade informada: %d\n",idade); //%d ou %i pra inteiro
	printf("Sexo informada: %c\n",sexo); //%c pra char
	printf("Altura informada: %.2f\n",altura); //%f pra float
	printf("Número informado: %.8f \n",numero_grande);
	return 0;
}

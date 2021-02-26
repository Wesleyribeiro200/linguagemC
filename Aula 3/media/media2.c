#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 

      Cálculo da média
      @author Wesley Ribeiro de freitas

 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("Cálculo da média\n");
	//variasveis
	float nota1,nota2,media;
	//entrada de dados
	printf("Digite a nota 1: ");
	scanf("%f",&nota1);
	printf("Digite a nota 2: ");
	scanf("%f",&nota2);
	//processamento
	media = (nota1 + nota2) /2;
	//saida
	printf("Resultado: %.1f\n", media);
	system("pause");
	return 0;	
}

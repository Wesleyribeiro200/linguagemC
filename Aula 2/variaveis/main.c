#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 

     	Estudo das vari�veis
        @author Wesley Ribeiro
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	// Tipos de vari�veis
	char professor[30]=("Wesley Ribeiro");
	char personal = 's' ;
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	
	
	printf("ACADEMIA PSHICAL\n");
	printf("__________________________\n");
	
	// %s -> Ler um tipo de variavel
	// , (virgula) unir  um texto com o conte�do da vari�vel
	
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Periodo: %d\n", periodo);
	printf("Carga H�raria semanal: %.1f\n", cargaHoraria);
	printf("Salario: R$ %.2lf\n", salario);
	printf("__________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float peso, altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	// o comando gets � usado especificamente para capturar String (char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf � usado para capturar as demais vari�veis
	// o s�mbolo &(amper) � usado para referenciar a mem�ria
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATEN��O! Para capturar um n�mero n�o inteiro usar (,) v�rgula
	scanf("%f", &peso);
	printf("Altura(m): ");
	scanf("%f", &altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	printf("______________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("______________________________\n");
	system("pause");
	return 0;
	}

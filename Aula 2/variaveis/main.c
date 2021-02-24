#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 

     	Estudo das variáveis
        @author Wesley Ribeiro
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	// Tipos de variáveis
	char professor[30]=("Wesley Ribeiro");
	char personal = 's' ;
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	
	
	printf("ACADEMIA PSHICAL\n");
	printf("__________________________\n");
	
	// %s -> Ler um tipo de variavel
	// , (virgula) unir  um texto com o conteúdo da variável
	
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Periodo: %d\n", periodo);
	printf("Carga Hóraria semanal: %.1f\n", cargaHoraria);
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
	// o comando gets é usado especificamente para capturar String (char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf é usado para capturar as demais variáveis
	// o símbolo &(amper) é usado para referenciar a memória
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATENÇÃO! Para capturar um número não inteiro usar (,) vírgula
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

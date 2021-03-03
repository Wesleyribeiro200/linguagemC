#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Sistema de gestão escola
	@autor Hendrik Vinicius
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 09");
	
                         
	printf("Boletim");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float altura;
	char disciplina[50];
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	gets(aluno);
	printf("Sexo(M/F): ");
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Disciplina: ");
	gets(disciplina);
	
	printf("\n");
	printf("_____________________________\n");
	system("pause");
	system("cls");

	//variáveis
	float nota1,nota2,nota3,nota4,media;
	//entrada
	printf("Digite a nota do 1 Bimestre: ");
	scanf("%f",&nota1);
	printf("Digite a nota do 2 Bimestre: ");
	scanf("%f",&nota2);
	printf("Digite a nota do 3 Bimestre: ");
	scanf("%f",&nota3);
	printf("Digite a nota do 4 Bimestre: ");
	scanf("%f",&nota4);
	//processamento
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	//saída
	printf("Média Anual: %.1f\n", media);
	
	system("pause");
	return 0;
}

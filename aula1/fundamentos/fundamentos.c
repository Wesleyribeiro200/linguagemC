#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 

    Fundamento da Linguagem c
    @author Wesley ribeiro de freitas

*/

int main(int argc, char *argv[]) {
	//a Linha abaixo configura o idioma para portugu�s 
	setlocale(LC_ALL, "Portuguese");
	printf("Ol� Mundo\n");
	system("color 0A");
	printf("Wesley ribeiro\n");
	system("pause");
    //a Linha abaixo limpa a tela do prompt de comando
    system("cls");
    system("color A0");
     printf("C�digo de cores:\n\n");
    printf("0 - preto\n");
    printf("1 - azul\n");
    printf("2 - verde\n");
    printf("3 - verde �gua\n");
    printf("4- vermelho\n");
    printf("5 - roxo\n");
    printf("6 - amarelo\n");
    printf("7 - branco\n");
    printf("8 - cinza\n");
    printf("9 - azul claro\n");
    printf("A - verde claro\n");
    printf("B - verde �gua claro\n");
    printf("C - vermelho claro\n");
    printf("D - lil�s\n");
    printf("E - amarelo claro\n");
    printf("F - branco brilhante\n");
    system("pause");
	return 0;
}

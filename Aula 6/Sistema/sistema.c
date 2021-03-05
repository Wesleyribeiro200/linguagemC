#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/*

 	Exemplo de uso da estrutura switch case
 	@author Wesley Ribeiro

*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("color 02");
	int opcao;
	printf("Sistema disponiveis: \n\n");
	printf("1. Windows\n");
	printf("2. Linux\n");
	printf("\n");
	printf("Digite a opção desejada: ");
	scanf("%d",&opcao);
	switch (opcao){
		case 1:
	       system("cls");
	       system("color 02");
	       printf("Carregando o sistema windows..........\n");
	       break;
	    case 2:
	    	system("cls");
	    	system("color 02");
	    	printf("Carregando o sistema Linux.........\n");
	    	break;
	    default:
	    	printf("Opção inválida\n");
	    	break;
	}
	system("pause");
	return 0;
}

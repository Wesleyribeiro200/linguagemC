#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

      Exemplo de usop dos operadores Lógicos
      @author Wesley Ribeiro

*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 02");	
	// variaveis
	int idade;
	printf("Verificar obrigatoriedade de votar\n\n");
	//entrada
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	// processamento / saida
	if (idade < 16){
		printf("PROIBIDO VOTAR\n");		
}   else if (idade > 17 && idade < 71){
	    printf("voto obrigatorio\n");  	
} 	else {
	    printf("voto facultativo\n");
		}    
	system("pause");
	return 0;
}

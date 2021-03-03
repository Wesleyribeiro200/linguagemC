#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo do IMC
	@author Wesley Ribeiro
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 1F");
	printf(" ___ __  __  ____ \n");
	printf("|_ _|  \\/  |/ ___|\n");
	printf(" | || |\\/| | |    \n");
	printf(" | || |  | | |___ \n");
	printf("|___|_|  |_|\\____|\n");
	printf("\n");
	//variáveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n", imc);
    // classificação de acordo com a tabela IMC
    if (imc < 17){
    	printf("Muito abaixo do peso\n");
	} else if (imc <18.5){
	    printf("Abaixo do peso\n");
}1
      else if ( imc < 25){
      	printf("Peso Normal\n");
	  }
	  else if (imc <30){
	  	printf("Acima do peso\n");
	  }
	  else if (imc <35){
	  	printf("Obesidade I\n");
	  }
	  else if (imc <40){
	  	printf("Obesidade II (severa)\n");
	  }
	  else {
	  	printf("Obesidade III (mórbida)");
	  }
	system("pause");
	return 0;
}

/*
Elabore um programa em C que dada a idade de um nadador classifica-o em uma das
seguintes categorias:
Infantil A = 5 - 7 anos
Infantil B = 8-10 anos
Juvenil A = 11-13 anos
Juvenil B = 14-17 anos
Adulto = maiores de 18 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]){
	
	int idade;
	
	

while(idade!=9999){

	printf("Insira a idade do morador [9999 para fechar]: ");
	scanf("%d", &idade);
	
	switch(idade){
		
			case 0 ... 4:
					printf("\nA idade %d nao compreende a idade minima exigida", idade);
			break;
		
			case 5 ... 7:
			printf("Infantil A");
			break;
			
			case 8 ... 10:
			printf("Infantil B");
			break;
			
			case 11 ... 13:
			printf("Infantil C");
			break;
			
			case 14 ... 17:
			printf("Infantil D");
			break;
			
			case(9999):
				printf("%d significa finalizar.", idade);
				printf("\n\nPressione ENTER para Finalizar Programa...");
				system("Pause>>null");
				exit(0);
				break;
		
		default:
			
		printf("Adulto");
		
	};
	printf("\n\nPressione ENTER para continuar...");
	system("Pause>>null");
	system("cls");
}




return 0;
}

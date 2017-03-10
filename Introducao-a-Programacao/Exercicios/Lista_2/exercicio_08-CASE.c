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
main(){
	
	int idade;
	
	

while(idade!=9999){


if (idade<=0 && idade <5){
	printf("A idade %d nao compreende a idade igual ou superior a 5", idade);
}else{

	printf("Insira a idade do morador [9999 para fechar]: ");
	scanf("%d", &idade);
	
	switch(idade){
		
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
				break;
		
		default:
			
		printf("Adulto");
		
	};
}

printf("\n\nPressione ENTER para continuar...");
system("Pause>>null");
system("cls");



}
	

}

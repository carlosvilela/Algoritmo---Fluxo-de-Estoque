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

main(){
	
	int idade;
	
	printf("Insira a idade do morador: ");
	scanf("%d", &idade);
	
	if (idade>=5 && idade<=7){
	printf("Infantil A");
	}else{
			if (idade>=8 && idade<=10){
			printf("Infantil B");	
			}else{
				if (idade>=11 && idade<=13){
			printf("Infantil C");	
			}else{
				if (idade>=14 && idade<=17){
			printf("Infantil D");	
			}else{
				printf("Adulto");
			}
		}
	}
}
}

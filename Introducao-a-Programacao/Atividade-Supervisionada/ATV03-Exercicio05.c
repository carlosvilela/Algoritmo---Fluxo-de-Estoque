/*
Faça um  programa que leia 10 números e no final exiba a soma destes números.
*/


#include <stdio.h>

main(){

	float numero, soma;
	
	soma = 0;
	
	printf("Soma de numeros em sequencia\n\n");
	
	for (int i = 0; i<10; i++){
		printf("Insira numero da sequencia %d: ", (i+1));
		scanf("%f", &numero);
		soma = soma + numero;
	}
	
	printf("\n\nA soma dos numeros inseridos e: %.2f", soma);	


}

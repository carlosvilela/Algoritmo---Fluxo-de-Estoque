/*
Faça um programa que calcule n! (fatorial de um número  n)
*/

#include <stdio.h>

main(){

	int numero = 1;
	int fatorial = 1;
	
	
	
	printf("Calcular Fatorial\n\n");
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	printf("\n\na fatorial de %d! => ", numero);
	
	for (int i = numero; i>0; i--){
		printf("%d ", i);
		
		fatorial = fatorial*i; 
	}
	
	printf("= %d\n\n", fatorial);

}

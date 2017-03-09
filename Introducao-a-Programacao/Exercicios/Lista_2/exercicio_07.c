/*
Elaborar um programa em C que lê 2 valores a e b e os escreva com a mensagem: "São
múltiplos" ou "Não são múltiplos.
*/

#include <stdio.h>

main(){
	
	int a, b, resultado1, resultado2;
	
	printf("Insira o Primeiro Valor (a): ");
	scanf("%d",&a);
	
	printf("Insira o Segundo Valor (b): ");
	scanf("%d", &b);
	
	resultado1 = a%b;
	resultado2 = b%a;
	
	if (resultado1 == 0){
		printf("%d e multiplo de %d", a, b);
	}else{
		if (resultado2 == 0){
		printf("%d e multiplo de %d", b, a);
	}else{
		printf("%d e %d NAO sao multiplos", b, a);
	}
}
}

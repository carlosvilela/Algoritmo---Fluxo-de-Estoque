/*
1- Faça um programa que leia dois números inteiros I (inicial) e F (final) e calcule:

f
E 2k
k=i


Obs.: Caso os números informados estejam em ordem decrescente, ordená-los em
ordem crescente.
*/

#include <stdio.h>

main(){
	
	int inicial, final, A, B;
	int i = 0;
	int soma = 0;
	
	printf("||===================================================================||\n");
	printf("|| Para iniciar o somatorio, primeiramente deve inserir um intervalo,||\n");
	printf("|| como, por exemplo o valor inicial e final para iniciar a contagem.||\n");
	printf("||===================================================================||\n\n");
	
	printf("Insira o valor inteiro inicial: ");
	scanf("%d", &inicial);
	
	printf("\nInsira o valor inteiro final: ");
	scanf("%d", &final);
	
	
	if (inicial<final){
		A = inicial;
		B = final;
	}else{
		A = final;
		B = inicial;
	}
	
	
	printf("\n\n");
	
	
	for (i=A; i<=B; i++){
		
		soma = soma + 2*i;
		
		printf("2*(%d) ", i);
		
		}
		
		printf("\nSoma = %d\n\n", soma);
		
		
	
	
	
	
	
	
	
	
	
	
}

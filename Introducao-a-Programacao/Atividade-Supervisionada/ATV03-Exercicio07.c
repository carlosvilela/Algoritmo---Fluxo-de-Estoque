/*
Seja A = {1, 2, 3, ..., n}. Faça um programa que leia n e exiba o produto cartesiano A x A.

Exemplo:

n = 3

A x A = { (1,1), (1,2), (1,3), (2,1), (2,2), (2,3), (3,1), (3,2), (3,3)} 
*/

#include <stdio.h>

int main (int argc, char** argv){
	
	int n, x, y, i, j;
	
	
	printf ("Insira o numero n: ");
	scanf("%d", &n);
	

	n = n-1;

	printf("\n\nAxA = { ");

	for (i = 0; i<=n; i++){

	for(j = 0;j<=n; j++){
	
	printf("(%d,", (i+1));
	printf("%d) ", (j+1));
		
	}
	
		
	}
	
	
	
	
	printf(" };\n\n");
	
	return 0;
}

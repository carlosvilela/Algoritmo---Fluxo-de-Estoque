/*
03-	Dada uma matriz M (inteira) de 3 linhas e 4 colunas construa um algoritmo que ache e imprima o maior elemento dessa matriz bem como a linha e a coluna onde ele ocorre.
*/

#include <stdio.h>

main(){
	
	int M[3][4];
	int i, j, maior, p_i, p_j;
	
	for (i=0; i<=2; i++){
		for (j=0; j<=3; j++){
			printf("Insira M[%d,%d]: ", (i+1), (j+1));
			scanf("%d", &M[i][j]);
		}
	}
	
	maior = M[1][1];
	
	for (i=0; i<=2; i++){
		for(j=0; j<=3; j++){
			if (M[i][j] > maior){
				maior = M[i][j];
				p_i = i;
				p_j = j; 
			}
		}
	}
	
	
	printf("O meior numero está em M[%d,%d] = %d", (p_i+1), (p_j+1), maior);
	
	
	
}

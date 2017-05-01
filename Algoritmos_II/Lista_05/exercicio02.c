/*
02- Dadas duas matrizes genéricas X e Y de mesma dimensão, construa um algoritmo que gere a matriz Z definida como a soma de X e Y. (Z = X + Y).
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int X[3][4];
	int Y[3][4];
	int Z[3][4];
	int i;
	int j;
	
	
	i = 0; j = 0;
	for (i=0; i<=2; i++){
		for(j=0; j<=3; j++){
			printf("\n\nInsira X[%d,%d]: ", (i+1), (j+1));
			scanf("%d", &X[i][j]);
			
			printf("\ninsira Y[%d,%d]: ", (i+1), (j+1));
			scanf("%d", &Y[i][j]);
		}
	}
	
	
	
	i = 0; j = 0;
	for (i=0; i<=2;i++){
		for(j=0; j<=3; j++){
			Z[i][j] = X[i][j]+Y[i][j];
			printf("\n\nZ[%d,%d] = %d\n",i,j, Z[i][j]);
		}
	}

	system("pause");
	
}

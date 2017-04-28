#include <stdio.h>
#include <stdlib.h>

main(){

	int MAT[2][3];
	int i, j;
	
	
	for (i=0; i<=2; i++){
		for (j = 0; j<=3; j++){
			printf("Insira o valor da Matriz MAT[%d,%d]: ", (i+1), (j+1));
			scanf("%d", &MAT[i][j]);
			system("cls");
		}
	}




	for (i =0; i<=2; i++){
		for (j=0; j<=3; j++){
			
			if ((MAT[i][j] % 2)==0){
				
				printf("a Matriz MAT[%d,%d] = %d e PAR\n", (i+1), (j+1), MAT[i][j]);
				
			}
			
		}
	}





}

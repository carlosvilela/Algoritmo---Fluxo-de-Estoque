#include <stdio.h>
#include <stdlib.h>


void main(){

	// Variaveis
	int M[3][4];
	int menor;
	int i, j;
	int indice_i;
	int indice_j;


	// Ler Matriz
	for (i = 0; i <= 2; i++){
		for (j = 0; j <= 3; j++){
			printf("M[%d,%d] = ", (i + 1), (j + 1));
			scanf("%d", &M[i][j]);
		}
	}

	// inicializa a variavel menor com o primeiro numero da matriz
	menor = M[0][0]; // considera o numero ZERO como o primeiro elemento da Matriz
	indice_i = 0; // indice i da Matriz M[i][j]
	indice_j = 0; // indice j da Matriz M[i][j]

	// Procurar o menor numero da Matriz
	for (i = 0; i <= 2; i++){
		for (j = 0; j <= 3; j++){
			if (M[i][j] < menor){
				menor = M[i][j];
				indice_i = i;
				indice_j = j;

			}
		}
	}


	// imprimir  o menor numero
	// considera o numero ZERO como o primeiro elemento da Matriz
	printf("o menor numero ocorre em M[%d, %d] = %d", (indice_i+1), (indice_j+1), menor);

	system("pause>>null");

}

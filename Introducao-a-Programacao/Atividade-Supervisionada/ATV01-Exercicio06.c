/*
6- Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
Considerar que a média é ponderada e que o peso de cada  nota é: 2,3 e 5, respectivamente. 
*/
#include "stdlib.h"

int main (int argc, char** argv[]){
	
	float N1, N2, N3, Media;
	
	printf("Insira a Nota 1: ");
	scanf("%f", &N1);
	
	printf("Insira a Nota 2: ");
	scanf("%f", &N2);
	
	printf("Insira a Nota 3: ");
	scanf("%f", &N3);
	
	Media = ((N1*2)+(N2*3)+(N3*5))/(2+3+5);
	
	printf("A Media e: %.2f", Media);
	
	
	return 0;
}

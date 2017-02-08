/*
4- Escreva um programa que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: 
D = (R+S)/(2+R)
onde
S = (A+B)^3
R = (C+B)^2
*/

#include "stdlib.h"
#include "math.h"

int main (int argc, char** argv[]){
	
	int A, B, C;
	double D, S, R;
	
	printf("Insira o Primeiro numero: ");
	scanf("%i", &A);
	
	printf("Insira o Segundo numero: ");
	scanf("%i", &B);
	
	printf("Insira o Terceiro numero: ");
	scanf("%i", &C);
	
	S = pow((A+B),3);
	R = pow((C+B),2);
	D = (R+S)/(2+R);
	
	printf("D = %.2f", D);
	
	return 0;
}
	
	
	

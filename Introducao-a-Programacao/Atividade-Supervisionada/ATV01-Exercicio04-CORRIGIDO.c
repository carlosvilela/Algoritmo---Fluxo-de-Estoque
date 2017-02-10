#include <stdio.h>
#include <math.h>

int main (int argc, char** argv[]){
	
	int A, B, C, S, R;
	float D, RS, doisR;
	
	printf("Insira o (A)Primeiro numero inteiro e positivo: ");
	scanf("%i", &A);
	
	printf("Insira o (B)Segundo numero inteiro e positivo: ");
	scanf("%i", &B);
	
	printf("Insira o (C)Terceiro numero inteiro e positivo: ");
	scanf("%i", &C);
	
	S = pow((A+B),3);
	R = pow((C+B),2);
	RS = (float) (R+S); // (float) é o conversor natural de inteiro para ponto flutuante
	doisR = (float) (2+R); // (float) é o conversor natural de inteiro para ponto flutuante
	D = RS/doisR;
	
	printf ("\n\nSabendo que: \n");
	printf("S = (A+B)^3 e R = (C+B)^2 e D = (R+S)/(2+R). logo:\n");

	printf("\nS = %i", S);
	printf("\nR = %i", R);
	printf("\nD = %.4f", D);
	
	return 0;
}
	
	
	

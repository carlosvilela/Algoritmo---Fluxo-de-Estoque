#include <stdio.h>
#include <math.h>

int main (int argc, char** argv[]){
	
	float A, B, C, D, X;
	
	printf("Insira o valor de A: ");
	scanf("%f", &A);
	printf("Insira o valor de B: ");
	scanf("%f", &B);
	printf("Insira o valor de C: ");
	scanf("%f", &C);
	printf("Insira o valor de D: ");
	scanf("%f", &D);
	
	X = ((2*B*C)-(pow(A,3)))/(pow(D,2)+6);
	
	printf("\n\nX = %.2f", X);
	
	return 0;
}

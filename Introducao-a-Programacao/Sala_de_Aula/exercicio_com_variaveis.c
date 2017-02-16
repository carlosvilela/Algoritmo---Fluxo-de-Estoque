#include "stdafx.h" // Biblioteca padrão do Visual Strudio
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv[]){


	int A = 7;
	int B = 3;

	int So, Su, P, D, R;


	So = A + B;
	Su = A - B;
	P = A * B;
	D = A / B;
	R = A % B;

	printf("%d + %d = %d\n", A, B, So); // So
	printf("%d - %d = %d\n", A, B, Su); //Su
	printf("%d * %d = %d\n", A, B, P); //P
	printf("%d / %d = %d\n", A, B, D); //D
	// usa-se %% para exibir o %, caso use 100% deverá colocar 100%%
	printf("%d %% %d = %d", A, B, R); //R




	system("Pause >>null");
	return 0;
}

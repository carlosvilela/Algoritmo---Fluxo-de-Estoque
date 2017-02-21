#include <stdio.h>
#include <math.h>

int main (int argc, char** argv[]){
	
	float pi = 3.415;
	
	float raio, comprimento, diametro, area;

	printf("Insira o Raio de uma circunferencia (em centimetros): ");
	scanf("%f", &raio);

	diametro = 2*raio;
	comprimento = pi*diametro;
	area = pi*pow(raio,2);

	printf("\n\nDiametro = %.4f;\nComprimento = %.4f;\nArea = %.4f", diametro, comprimento, area);
	
	return 0;
}

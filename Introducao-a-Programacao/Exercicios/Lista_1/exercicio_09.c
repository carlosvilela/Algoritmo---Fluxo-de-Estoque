#include <stdio.h>

int main (int argc, char** argv[]){
	
	int peso1, peso2, peso3, peso;
	float nota1, nota2, nota3, media;
	
	printf("<<<Calcular Media das tres notas>>>\n");
	
	printf("Insira a Primeira Nota: ");
	scanf("%f", &nota1);
	printf("Insira o Peso da primeira nota: ");
	scanf("%d", &peso1);
	
	printf("Insira a Segunda Nota: ");
	scanf("%f", &nota2);
	printf("Insira o Peso da segunda nota: ");
	scanf("%d", &peso2);
	
	printf("Insira a Terceira Nota: ");
	scanf("%f", &nota3);
	printf("Insira o Peso da terceira nota: ");
	scanf("%d", &peso3);
	
	peso = (peso1+peso2+peso3);
	
	media = (((float) nota1*peso1) + ((float) nota2*peso2) + ((float) nota3*peso3))/((float) peso);
	
	printf("\n\n a media das notas e : %.2f", media);
	
	return 0;
}

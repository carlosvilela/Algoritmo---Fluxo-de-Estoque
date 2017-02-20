#include <stdio.h>

int main (int argc, char** argv[]){
	
	char nome[30], matricula[14];
	float salario, vale_transporte;
	
	printf("nome: ");
	scanf("%s",&nome);
	printf("matricula: ");
	scanf("%s", &matricula);
	printf("salario: ");
	scanf("%f", &salario);
	
	vale_transporte = (salario)*0.06;
	
	printf("%s - %s", nome, matricula);
	printf("\n%.2f", vale_transporte);
	
	
	return 0;
}

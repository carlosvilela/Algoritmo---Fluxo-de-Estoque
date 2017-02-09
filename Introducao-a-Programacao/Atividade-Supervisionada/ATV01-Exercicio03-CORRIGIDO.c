#include <stdio.h>

int main (int argc, char** argv[]){
	
	char nome[50];
	float salario, INSS;
	
	printf("Insira o nome do individuo: ");
	scanf("%s", &nome);
	
	printf("Insira o salario: ");
	scanf("%f", &salario);
	
	INSS = salario*0.1;
	
	printf("\n\nNome: %s; Salario: R$ %.2f; INSS: R$ %.2f", nome, salario, INSS);
	
}

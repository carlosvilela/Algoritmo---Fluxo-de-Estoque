/*
Faça um programa que leia o nome e o salário de um indivíduo.
Determine e exiba o desconto do INSS, que deve ser de 10% do salário.
Exemplo: Nome: Fulano Salario R$ 2000.00 INSS R$ 200.00
*/
#include "stdlib.h"

int main (int argc, char** argv[]){
	
	char nome[50];
	float salario, INSS;
	
	printf("Insira o nome do individuo: ");
	scanf("%s", &nome);
	
	printf("Insira o salario: ");
	scanf("%f", &salario);
	
	INSS = salario*0.1;
	
	printf("Nome: %s; Salario: R$ %.2f; INSS: R$ %.2f", nome, salario, INSS);
	
}

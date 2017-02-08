/*
5-  O custo ao consumidor de um carro novo é a soma do custo de fábrica com a 
percentagem do distribuidor e dos impostos (ambos aplicados ao custo de fábrica). 
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, 
escrever um programa em C que leia o custo de fábrica de um carro e escreva o custo ao consumidor. 
*/

#include "stdlib.h"

int main (int argc, char** argv[]){
	
	float custo_consumidor, custo_fabrica, comissao_distribuidor, impostos;
	
	printf("Insira o custo de fabrica: ");
	scanf("%f", &custo_fabrica);
	
	comissao_distribuidor = custo_fabrica*0.28;
	impostos = custo_fabrica*0.45;
	custo_consumidor = custo_fabrica+comissao_distribuidor+impostos;
	
	printf("O Custo do Consumidor e: R$ %.2f", custo_consumidor);
	
	return 0;
	 
}

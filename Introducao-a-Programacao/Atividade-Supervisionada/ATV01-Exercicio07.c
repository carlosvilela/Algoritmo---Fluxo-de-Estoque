/*
7-Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos
e mostre-o expresso em horas, minutos e segundos.
*/
#include "stdlib.h"

int main (int argc, char** argv[]){
	
	int tempo, horas, minutos, segundos;
		
	printf("Insira o tempo de duracao em segundos: ");
	scanf("%i", &tempo);
	
	horas = (tempo/60)/60;
	minutos = (tempo-((horas*60)*60))/60;
	segundos = tempo- ((horas*60*60)+(minutos*60));
	
	printf("%ih %im %is", horas, minutos, segundos);
	
	return 0;
}

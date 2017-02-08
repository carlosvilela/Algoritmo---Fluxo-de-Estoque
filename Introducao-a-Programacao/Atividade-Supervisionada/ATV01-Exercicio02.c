/*
2- Faça um programa que leia um número em quilômetros e retorne outro equivalente em centímetro.

Use quatro casas decimais, suponha que o número informado pelo usuário seja maior que zero.
*/
#include "stdlib.h"

int main (int argc, char** argv[]){
	
	float DistanciaKM, DistanciaCM;
	
	printf("Insira a distancia em km: ");
	scanf("%f",&DistanciaKM);
	
	DistanciaCM = (DistanciaKM*1000); // km hm dam M cm dm mm
	
	printf("A Distancia %.4fkm e equivalente a %.4fcm", DistanciaKM, DistanciaCM);
	
	return 0;
}

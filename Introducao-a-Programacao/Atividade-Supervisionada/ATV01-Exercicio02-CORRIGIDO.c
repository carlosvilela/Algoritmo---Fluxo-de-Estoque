#include <stdio.h>

int main (int argc, char** argv[]){
	
	float DistanciaKM, DistanciaCM;
	
	printf("Insira a distancia em km: ");
	scanf("%f",&DistanciaKM);
	
	DistanciaCM = (DistanciaKM*100000); // km hm dam M dm cm mm
	
	printf("\n\nA Distancia de %.4fkm e equivalente a %.4fcm", DistanciaKM, DistanciaCM);
	
	return 0;
}

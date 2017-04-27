#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char** argv){
	
	
	int num[1], numero[1], cont;
	int i;
	
	
	printf("insira um numero: ");
	scanf("%d", &num[0]);
	printf("insira outro numero: ");
	scanf("%d", &num[1]);

	cont = abs(num[1]-num[0])+1;


	if (num[0]>num[1]){
		numero[0] = num[0];
		numero[1] = num[1];
	}else{
		numero[0] = num[1];
		numero[1] = num[0];

	}


	for(i=0; i<cont; i++){
		
		printf("%d\n", (numero[0]--));
	}
	
	
	return 0;
}

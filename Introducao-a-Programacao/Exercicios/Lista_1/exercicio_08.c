#include <stdio.h>

int main (int argc, char** argv[]){
	
	int numero, unidade, dezena, flag;
	
	flag = 0;
	
	while (flag==0){
		
		printf("Digite um numero entre 10 e 99: ");
		scanf("%d", &numero);
	if (numero>=10 && numero<100){
		
		dezena = numero/10;
		unidade = numero%10;
		
		printf("Este numero contem %d dezenas e %d unidades", dezena, unidade);
		
		flag=1;
	}else{
		printf("\nTente novamente\n");
	}	
	
	}
	
	return 0;
}

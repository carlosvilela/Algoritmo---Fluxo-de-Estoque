/*
 Escrever um programa em C que lê um valor em reais e calcula qual o menor número possível de notas de 100, 50, 20, 10, 5 e 2 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>

int main (int argc, char** argv[]){
	
	float valor;
	int N100, N50, N20, N10, N5, N2;
	
	printf("Insira um Valor: ");
	scanf("%f", &valor);
	
	N100 = (int) valor/100;
	valor = valor - (N100*100);
	
	N50 = (int) valor/50;
	valor = valor - (N50*50);
	
	N20 = (int) valor/20;
	valor = valor - (N20*20);
	
	N10 = (int) valor/10;
	valor = valor - (N10*10);
	
	N5 = (int) valor/5;
	valor = valor - (N5*5);
	
	N2 = (int) valor/2;
	valor = valor - (N2*2);
	
	printf("\n\nNotas de 100: %d\n",N100);
	printf("Notas de 50: %d\n",N50);
	printf("Notas de 20: %d\n",N20);
	printf("Notas de 10: %d\n",N10);
	printf("Notas de 5: %d\n",N5);
	printf("Notas de 2: %d\n",N2);
	printf("Restam: R$ %.2f para completar\n",valor);
		
	
	return 0;
}

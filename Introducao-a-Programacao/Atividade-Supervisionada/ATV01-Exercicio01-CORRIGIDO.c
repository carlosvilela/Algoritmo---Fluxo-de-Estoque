#include <stdio.h>

int main(int argc, char** argv[]){
	
	char nome[50];
	int idade;

	printf("Digite seu nome >> ");
	scanf("%s",&nome);
	
	printf("Idade >> ");
	scanf("%i",&idade);
	
	printf("\n\n%s - %i", nome, idade);
	
	return 0;
}

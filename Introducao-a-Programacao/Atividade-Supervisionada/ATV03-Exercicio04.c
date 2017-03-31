/*
Faça um programa que leia a nota de um aluno entre 0 e 10 (ambos inclusive).
*/


#include <stdio.h>

int main (int argc, char** argv){
	
	int i;
	float nota;
	
	i=0;
	while(i==0){
	
	printf("Insira a nota do Aluno: ");
	scanf("%f", &nota);
	
if ((nota >= 0.00) && (nota<=10.00)){
 		i = 1;
	 }else{
				printf("\nErro: A nota deve estar entre 0 a 10\n\n");	
	}
}

printf("\n\nO aluno tem nota %.2f\n\n ", nota);
	
	return 0;
}

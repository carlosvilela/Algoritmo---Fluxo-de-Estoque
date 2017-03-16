/*
Faça um programa que leia três números inteiros A, B e C.
Se A for o maior deles, o programa deve:
Exibir a informação: “A é o maior número lido.”.
Calcular e exibir a expressão ?? =
??+??
??²
Observação se ?? = 0,?? = 0
Se B for o maior deles, o programa deve:
Exibir a informação: “B é o maior número lido.”.
Calcular e exibir a expressão ?? =
??+??
??+1
Observação se ?? = -1, ?? = 0
Se C for o maior deles, o programa deve:
Exibir a informação: “C é o maior número lido.”.
Calcular e exibir a expressão ?? =
??-??-??
(??+??+??)
2+1

*/

#include <stdio.h>
#include <math.h>

int main (int argc, char** argv[]){
	
	
	int A, B, C;
	float R, S, T;
	
	
	printf("Insira o numero de A: ");
	scanf("%d", &A);
	
	printf("Insira o numero de B: ");
	scanf("%d", &B);
	
	printf("Insira o numero de C: ");
	scanf("%d", &C);
	
	if (A>B && A>C){
		
		printf("A e o maior numero - ");
		
		if (C==0){
			printf("R = 0");
		}else{
			R = (A+B)/pow(C, 2);
			printf("R = %.2f", R);
		}
		
		
		
	}else{
		if(B>C){
			printf("B e maior - ");
			if(C==(-1)){
			C=0;
			S = (A+B)/(C+1);
			
			printf("S = %.2f", S);

			}else{
		
			S = (A+B)/(C+1);
			printf("S = %.2f", S);
		}
		}else{
			printf("C e o maior - ");
			
			T= (A-B-C)/(pow((A+B+C),2)+1);
			
			printf("T = %.2f", T);
			
		}
	}
	
	
	return 0;
}

/*
1-    Escrever um programa em C que lê o número de identificação (com seis dígitos), as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula:

 

MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7

 

A atribuição de conceitos obedece a tabela abaixo:

Média de Aproveitamento

Conceito

9,0

A

7,5 e < 9,0

B

6,0 e < 7,5

C

4,0 e < 6,0

D

< 4,0

E

 

O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
*/

#include <stdio.h>
#include <stdlib.h> // usar malloc

int main (int argc, char** argv[]){
	
	int matricula; // de 0 a 5 = 6
	float MA, Nota1, Nota2, Nota3, ME;
	char conceito;
	char* status = (char*) malloc(sizeof(char[10])); // char estilo string de 10 posicoes
	
	printf("Insira o Numero de Identificacao do Aluno: ");
	scanf("%6d", &matricula); // le apenas os primeiros 6 algarismos
	
	char buffer;
	gets(&buffer);
	
	printf("Insira a Nota 1: ");
	scanf("%f", &Nota1);
	printf("Insira a Nota 2: ");
	scanf("%f", &Nota2);
	printf("Insira a Nota 3: ");
	scanf("%f", &Nota3);
	
	printf("Insira a Media dos Exercicios que fazem parte da avaliacao: ");
	scanf("%f", &ME);
	
	MA = (Nota1 + Nota2*2 + Nota3*3 + ME)/7;
	
	if (MA<4.0){
		conceito = 'E';
		status = "Reprovado";
	}else{
		if(MA<6.0){
			conceito = 'D';
			status = "Reprovado";
		}else{
			if (MA<7.5){
				conceito = 'C';
				status = "Aprovado";
			}else{
				if(MA<9.0){
					conceito = 'B';
					status = "Aprovado";
				}else{
					if(MA>=9.0){
						conceito = 'A';
						status = "Aprovado";
					}
				}
			}
		}
	}
	
	printf("\n\nIdentificacao do Aluno (Matricula): %d;\n\nNota1 = %.2f; Nota2 = %.2f; Nota3 = %.2f;\n\nMedia dos Exercicios = %.2f; ", matricula, Nota1, Nota2, Nota3, ME);
	printf("\n\nConceito: %c; Situacao do Aluno: %s\n\nMedia de Aproveitamento: %.2f", conceito, status, MA);
	
	// desalocar ponteiro string
	status = NULL;
	free(status);
	
	return 0;
}

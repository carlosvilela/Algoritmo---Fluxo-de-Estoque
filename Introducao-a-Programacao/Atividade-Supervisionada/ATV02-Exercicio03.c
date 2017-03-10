/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. Faça um programa em C que leia o salário e o código do cargo de um funcionário e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o salário antigo, o novo salário e a diferença.

Código	Cargo	Percentual
101	Gerente	10%
102	Engenheiro	20%
103	Técnico	30%
*/

#include <stdio.h>

#include <stdlib.h> // usar o malloc para criar ponteiros

int main (int argc, char** argv[]){
	
	int lerCodigo;
	float salario, novoSalario, diferenca;
	char* cargo = (char*) malloc(sizeof(char[10])); // Cria ponteiro estilo string de 10 posicoes
	
	printf("Insira o Salario do Funcionario: ");
	scanf("%f", &salario);
	
	printf("Insira o Codigo do Cargo: ");
	scanf("%d", &lerCodigo);
	
	if (lerCodigo == 101){
		cargo = "Gerente";
		novoSalario = salario*1.10;
		
	}else{
		if (lerCodigo == 102){
			cargo = "Engenheiro";
			novoSalario = salario*1.20;
			
		}else{
			if (lerCodigo == 103){
				cargo = "Tecnico";
				novoSalario = salario*1.30;
				
			}else{
				cargo = "Outros";
				novoSalario = salario*1.40;
			}
		}
	}
	
	diferenca = novoSalario-salario;
	
	printf("\n\nCargo: %s;", cargo);
	printf("\nSalario Antigo: R$ %.2f\nNovo Salario R$ %.2f", salario, novoSalario);
	printf("\nDiferenca: R$ %.2f\n\n", diferenca);
	
	// desalocar ponteiro
	cargo = NULL;
	free(cargo);
	
	
	return 0;
}

/*
1-    Uma pousada cobra R$ 150,00 por diária e mais uma taxa adicional de serviços.

 

Se a diária for menor que 5 a taxa é de R$ 20,00. Se o número de diárias for igual a 5 a taxa é de R$ 14,00 e se o número for maior que 5 a taxa é de R$ 12,00.

Se o cliente da pagar em dinheiro, a pousada oferece um desconto de 5% nas taxas de serviço e 10% no valor da diária.

Faça um programa em C que leia o nome do hóspede, número de diárias, a forma de pagamento e imprima o valor (sem o desconto) e o valor final a pagar (caso haja o desconto).
*/

#include <stdio.h>

int main (int argc, char** argv[]){
	
	int diarias;
	char FormaPagamento, Hospede[50];
	float ValorDiaria, ValorTaxa, ValorDesconto_Diaria, ValorDesconto_Taxa, total;
	
	
	printf ("Insira o Nome do Hospede: ");
	scanf("%s", &Hospede);
	
	printf ("Insira a Quantidade de Diarias: ");
	scanf("%d", &diarias);
	
	char buffer;
	gets(&buffer);
	
	printf ("Pagamento em Dinehiro [S/N]: ");
	scanf("%c", &FormaPagamento);
	
	ValorDiaria = diarias*100;
	
	if(diarias<5){
		ValorTaxa = 20.00;
	}else{
		if(diarias==5){
			ValorTaxa = 14.00;
		}else{
			ValorTaxa = 12.00;
		}
	}
	
	switch (FormaPagamento){
	
		case('S'):
		case('s'):
		ValorDesconto_Diaria = ValorDiaria*(0.90);
		ValorDesconto_Taxa = ValorTaxa*(0.95);
		printf("\n\nHospede: %s;\nDiarias: %d;\nValor da Diaria: R$ %.2f;\nValor da Taxa de Servico: R$ %.2f;", Hospede, diarias, ValorDiaria, ValorTaxa);
		printf("\n\n>>Valor Final<<\n\nValor da Diaria com desconto: R$ %.2f;\nValor da Taxa de Servico com desconto: R$ %.2f", ValorDesconto_Diaria, ValorDesconto_Taxa);
		total = ValorDesconto_Diaria + ValorDesconto_Taxa;
		printf("\n\nValor a Pagar: R$ %.2f", total);

		break;
		
		default:
		printf("\n\nHospede: %s;\nDiarias: %d;\nValor da Diaria: R$ %.2f;\nValor da Taxa de Servico: R$ %.2f;", Hospede, diarias, ValorDiaria, ValorTaxa);
		total = ValorDiaria + ValorTaxa;
		printf("\n\nValor a Pagar: R$ %.2f", total);
		break;
		
	}
	
	
			
	
	return 0;
}

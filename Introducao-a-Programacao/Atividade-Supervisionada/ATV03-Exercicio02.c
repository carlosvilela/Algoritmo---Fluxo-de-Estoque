/*
Para ser bissexto, o ano deve ser:

Divisível por 4. Sendo assim, a divisão é exata com o resto igual a zero;

Não pode ser divisível por 100. Com isso, a divisão não é exata, ou seja, deixa resto diferente de zero;

Pode ser que seja divisível por 400. Caso seja divisível por 400, a divisão deve ser exata, deixando o resto igual a zero.

De acordo com os critérios estabelecidos acima, vamos determinar se o ano de 2015 ou 2016 é bissexto. Para isso, existem três situações preestabelecidas:

Primeira situação: Se o ano de 2015 ou 2016 for uma divisão exata em relação a 4, deveremos verificar, em seguida, se não é divisível por 100. Se não for, o ano será bissexto;

Segunda situação: Se o ano de 2015 ou 2016 não for divisível por 4, então deveremos verificar se ele é divisível por 400. Se também não for divisível, o ano de 2015 não será bissexto;

Terceira situação: Se o ano de 2015 ou 2016 não for divisível por 4, então devemos verificar se ele é divisível por 400. Caso seja, o ano de 2015 é bissexto.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
	
	int ano, div4, div100, div400;
	
	while(ano!=9999){

	
	printf("VERIFICADOR DE ANO BISSEXTO\n\n");
	printf("Insira o ano com 4 digitos (9999 para sair): ");
	scanf("%d", &ano);
	
	div4= ano % 4;
	div100 = ano % 100;
	div400 = ano % 400;
	
	if (div4 ==0){
		if (div100 != 0){
			printf("Ano Bissexto");
		}else{	if(div400 == 0){
		printf("Ano Bissexto");
		}else{
			printf("O ano NAO e Bissexto");
		}
		}
	}else{
		if(div400 == 0){
		printf("Ano Bissexto");
		}else{
			printf("O ano NAO e Bissexto");
		}
	}
	
	
	printf("\n\n");
	system("PAUSE");
	system("cls");
	
	}
}

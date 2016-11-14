#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

#include <string>
#include <iostream>

using namespace std;

void linha(int num){

	int i;
	for (i = 1; i <= num; i++){
		putchar('_');
	}
}


int main(int argc, char *argv[]){

	setlocale(LC_ALL, "Portuguese");


	int cont;
	int final = 2;
	
	char ir;
	
	int codigo[final];
	string descricao[10];
	int quantidade[final];
	float valor[final];



	cont = 1;
	while (cont <= final){
		
		system("cls");

		linha(80);
		printf("\t\t\t\t");     printf("%iª PRODUTO", cont);
		putchar('\n');
		linha(80);
		
		printf("CODIGO: "); scanf("%i", &codigo[cont]);
		printf("Descriçao : "); getline (cin, descricao[cont]);
		printf("Quantidade : "); scanf("%i", &quantidade[cont]);
		printf("Valor do item : "); scanf("%f0.2", &valor[cont]);

		cont++;
	}


// exibir produtos cadastrados
		system("cls");
		cont = 1;
	while (cont <= final){
		
		putchar('\n');
	
		printf("|CODIGO: %i |  ", codigo[cont]);
		cout << "|Descriçao : "<< descricao[cont] << "|";
		printf("|Quantidade : %i |  ", quantidade[cont]);
		printf("|Valor do item : %f |  ", valor[cont]);

		cont++;
	}


// encontrar produto
cont = 1;
int codigo_que_procuro = 123;
	while (cont <= final){
		

if (codigo[cont] == codigo_que_procuro)
{

printf("CODIGO: %i; ", codigo[cont]);
}

}



//	linha(13); printf("Informe o 'I' para incluir e 'R' para retirar!");linha(20); scanf("%c", &ir);
//		putchar('\n');










return 0;
}


/*
05- Elabore um algoritmo que leia uma variável String (S) e inverta as posições dos seus caracteres.
Exemplos:
S := ‘CASA’;  S := ‘ASAC’;
S := ‘LUA’;  S := ‘AUL’;
S := ‘BRASIL’;  S := ‘LISARB’;
S := ‘INFORMAÇÃO”;  S := OÃÇAMROFNI’ ;
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char** argv){

	char S[50];
	char Resultado[50];
	int x;
	
	printf("Insira uma palavra: ");
	gets(S);
	
	x = (strlen(S)-1);
	
	for(int i = 0; i<=x; i++){

		Resultado[i] = S[x-i];

		printf("%c",Resultado[i]);

	}
	
	return 0;
}

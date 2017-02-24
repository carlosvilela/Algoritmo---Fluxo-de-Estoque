/*
1- Faça um programa que leia seu nome e sua idade. Após duas linhas e exiba nome e idade separados por hífen.

Exemplo:
Digite seu nome >> Fulano
Idade >> 30

Fulano – 30 anos
*/

#include <stdio.h>

int main(int argc, char** argv[]){

char nome[50];
int idade;

printf("Digite seu nome >> ");
scanf("%s",&nome);

printf("Idade >> ");
scanf("%d",&idade);

printf("\n\n%s - %d anos", nome, idade);

return 0;
}

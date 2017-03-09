/*
Faça um programa em C que leia um número inteiro composto por três algarismos (Unidade, Dezena e Centena). Em seguida o programa deve exibir a decomposição desse número.
*/

#include <stdio.h>

int main (int argc, char** argv[]){

int x, centena, dezena, unidade;

printf("Insira um numero inteiro com tres algarismos: ");
scanf("%d", &x);

centena = x/100;
dezena = (x%100)/10;
unidade = (x - (centena*100))%10;


printf("%d Centena, %d Dezena, %d Unidade", centena, dezena, unidade);


return 0;
}

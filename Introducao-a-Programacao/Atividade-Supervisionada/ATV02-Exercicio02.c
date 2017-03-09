/*
Escreva um algoritmo que leia 3 números inteiros e mostre-os em ordem crescente.
*/

#include <stdio.h>

int main (int argc, char** argv[]){

int N1, N2, N3;

printf("Insira o Primeiro Numero inteiro: ");
scanf("%d", &N1);
printf("Insira o Segundo Numero inteiro: ");
scanf("%d", &N2);
printf("Insira o Terceiro Numero inteiro: ");
scanf("%d", &N3);

printf ("\n\nNumeros em Ordem Crescente: ");

if ((N1<N2)&&(N2<N3)){
printf("%d; %d; %d;", N1, N2, N3);
}else{
if ((N1<N3)&&(N3<N2)){
printf("%d; %d; %d;", N1, N3, N2);
}else{
if ((N2<N1)&&(N1<N3)){
printf("%d; %d; %d;", N2, N1, N3);
}else{
if((N2<N3)&&(N3<N1)){
printf("%d; %d; %d;", N2, N3, N1);
}else{
if((N3<N1)&&(N1<N2)){
printf("%d; %d; %d;", N3, N1, N2);
}else{
if((N3<N2)&&(N2<N1)){
printf("%d; %d; %d;", N3, N2, N1);
}
}
}
}
}
}


return 0;
}

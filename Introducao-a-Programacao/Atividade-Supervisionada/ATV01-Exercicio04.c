/*
4- Escreva um programa que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: 
D = (R+S)/(2+R)
onde
S = (A+B)^3
R = (C+B)^2
*/

#include <stdio.h>
#include <math.h>

int main (int argc, char** argv[]){

int A, B, C, S, R;
float D, RS, doisR;

printf("Insira o (A)Primeiro numero inteiro e positivo: ");
scanf("%d", &A);

printf("Insira o (B)Segundo numero inteiro e positivo: ");
scanf("%d", &B);

printf("Insira o (C)Terceiro numero inteiro e positivo: ");
scanf("%d", &C);

S = pow((A+B),3);
R = pow((C+B),2);
RS = (float) (R+S); // (float) é o conversor natural de inteiro para ponto flutuante
doisR = (float) (2+R); // (float) é o conversor natural de inteiro para ponto flutuante
D = RS/doisR;

printf ("\n\nSabendo que: \n");
printf("S = (A+B)^3 e R = (C+B)^2 e D = (R+S)/(2+R). logo:\n");

printf("\nS = %d", S);
printf("\nR = %d", R);
printf("\nD = %.4f", D);

return 0;
}

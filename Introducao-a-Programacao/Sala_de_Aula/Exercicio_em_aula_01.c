/*
1) Leia 2 numeros inteiros não sucessivos;
2) se B < A trocar os valores

Somar os numeros com o intervalo
*/


#include <stdio.h>
#include <stdlib.h>


main(){



int A, B, x;
int soma = 0;
int N1, N2;


do{

printf("Insira um numero inteiro: ");
scanf("%d", &A);

printf("Insira outro numero inteiro: ");
scanf("%d", &B);

system("cls");

}while((A==B) || (A==(B+1)) || (A==(B-1)));


printf("A = %d; B = %d\n", A, B);

if (B<A){
x=A;
A=B;
B=x;
}

printf("Soma = ");

for (int i = A;i<=B;i++){

printf("%d + ", i);
soma = soma + i;

}

printf (" = %d", soma);

}

/*
Fazer o fatorial de um numero
*/

#include <stdio.h>
#include <stdlib.h>


main(){

int N;
int fat = 1;


do{

printf("Insira um numero inteiro: ");
scanf("%d", &N);

system("cls");

}while(N<0);


printf("%d! = ", N);

for (int i = 1; i<=N ;i++){

fat = fat*i;

}

printf ("%d", fat);


}

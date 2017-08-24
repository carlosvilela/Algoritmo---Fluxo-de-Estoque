#include <stdio.h>
#include <string.h>


void convert (int,int);


main(){

    int decimal,b;


    printf("|| == >>>>>>>>> Conversor de Bases, de decimal para qualquer base <<<<<<<< == ||");

    printf("\n\nInsira um numero decimal positivo: ");
    scanf("%d", &decimal);
    printf("Insira a base de conversao limitada ate 16: ");
    scanf("%d", &b);

    convert(decimal, b);


}

void convert (int valor,int base){

    int resto[16], b, numero;
    char valorBase[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char resposta[16];
    numero = valor;


    b = base;

    int i = 0;
    while(numero>0){

        resto[i] = numero%base;
        numero = numero/b;

         resposta[i] = valorBase[resto[i]];



    i++;

    }



    for (int y = (strlen(resposta)); y >=0; y--){

         printf("%c", resposta[y]);

    }


}

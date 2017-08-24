#include <stdio.h>


main(){

    int decimal,base,b, resto[16];
    char valorBase[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};


    printf("|| == >>>>>>>>> Conversor de Bases, de decimal para qualquer base <<<<<<<< == ||");

    printf("\n\nInsira um numero decimal positivo: ");
    scanf("%d", &decimal);
    printf("Insira a base de conversao limitada ate 16: ");
    scanf("%d", &b);

    base = b;

    int i = 0;
    while(decimal>0){

        resto[i] = decimal%base;
        decimal = decimal/b;


        printf("%c", valorBase[resto[i]]);

    i++;


    }

}

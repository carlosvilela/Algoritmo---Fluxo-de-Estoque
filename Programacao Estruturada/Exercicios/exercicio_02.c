/*
================================================================
Desenvolvido pelo Aluno: Carlos Bezerra Vilela
Instituicao: UNICARIOCA - Rio Comprido
Periodo: Terceiro Periodo - Engenharia de Computação
Data: 03/09/2017

Objetivo: escrever o valor por extenso.
================================================================
*/

#include <stdio.h>
#include <string.h>

const char unidade[21][10];
const char dezena[10][10];
const char centena[10][15];

char *valor (double);


main(){

float dimdim;

    printf("Insira um valor limitado a 999milhoes, insira os centavos com 2 casas de precisao: ");
    scanf("%f", &dimdim);

    printf("Voce inseriu o valor de:\n%s\n\n",valor(dimdim));

}

//=============================================

char *valor (double dinheiro){
char retorno[1000000] = "";
int centavo, uni, dez, cent, mil, milh;

milh = dinheiro/1000000;
mil = (dinheiro-(milh*1000000))/1000;
cent = (dinheiro-(milh*1000000)-(mil*1000))/100;
dez = (dinheiro-(milh*1000000)-(mil*1000)-(cent*100));
centavo = (double)((dinheiro - (milh*1000000)-(mil*1000)-(cent*100)-(dez))*100);


switch(milh){
case 1 ... 19:
    strcat(retorno,unidade[milh]);
    strcat(retorno, " Milhoes ");
break;

case 20 ... 99:
{
            int d = (milh/10);
            int u = (milh-(d*10));
    strcat(retorno,dezena[d]);
    strcat(retorno," e ");
    strcat(retorno,unidade[u]);
    strcat(retorno, " Milhoes ");
}
break;

case 100 ... 999:
{
            int ce = (milh/100);
            int de = (milh-(ce*100))/10;
            int un=(milh-(ce*100)-(de*10));

    strcat(retorno,centena[ce]);

    if (de>=2 && de<=9){


    strcat(retorno," e ");
    strcat(retorno,dezena[de]);
    strcat(retorno," e ");
    strcat(retorno,unidade[un]);
    strcat(retorno, " Milhoes ");


    }else{

    strcat(retorno," e ");
     strcat(retorno,unidade[(milh-(ce*100))]);
    strcat(retorno, " Milhoes ");
    }
}
break;

}



switch(mil){
case 1 ... 19:
    strcat(retorno,unidade[mil]);
    strcat(retorno, " Mil ");
break;

case 20 ... 99:
{
            int d = (mil/10);
            int u = (mil-(d*10));
    strcat(retorno,dezena[d]);
    strcat(retorno," e ");
    strcat(retorno,unidade[u]);
    strcat(retorno, " Mil ");
}
break;

case 100 ... 999:
{
            int ce = (mil/100);
            int de = (mil-(ce*100))/10;
            int un=(mil-(ce*100)-(de*10));

    strcat(retorno,centena[ce]);

    if (de>=2 && de<=9){


    strcat(retorno," e ");
    strcat(retorno,dezena[de]);
    strcat(retorno," e ");
    strcat(retorno,unidade[un]);
    strcat(retorno, " Mil ");


    }else{

    strcat(retorno," e ");
     strcat(retorno,unidade[(mil-(ce*100))]);
    strcat(retorno, " Mil ");
    }
}
break;

}



switch(cent){
case 1 ... 5:
    strcat(retorno,centena[cent]);
    strcat(retorno, " ");
break;

}

switch(dez){
case 1 ... 19:
    strcat(retorno, " ");
    strcat(retorno,unidade[dez]);
    strcat(retorno, " Reais ");
break;

case 20 ... 99:
{
    strcat(retorno," ");
            int d = (dez/10);
            int u = (dez-(d*10));
    strcat(retorno,dezena[d]);
    strcat(retorno," e ");
    strcat(retorno,unidade[u]);
    strcat(retorno, " Reais ");
}
break;

}

switch(centavo){
case 1 ... 19:
    strcat(retorno, " ");
    strcat(retorno,unidade[centavo]);
    strcat(retorno, " Centavos ");
break;

case 20 ... 99:
{
    strcat(retorno," ");
            int d = (centavo/10);
            int u = (centavo-(d*10));
    strcat(retorno,dezena[d]);
    strcat(retorno," e ");
    strcat(retorno,unidade[u]);
    strcat(retorno, " Centavos ");
}
break;

}





return retorno;

}


//===========================================

const char unidade[21][10]={
    "",
    "um",
    "dois",
    "tres",
    "quatro",
    "cinco",
    "seis",
    "sete",
    "oito",
    "nove",
    "dez",
    "onze",
    "doze",
    "treze",
    "quatorze",
    "quinze",
    "dezesseis",
    "dezessete",
    "dezoito",
    "dezenove",
    "vinte"
    };

    const char dezena[10][10]={
        "",
        "",
        "vinte",
        "trinta",
        "quarenta",
        "cinquenta",
        "sessenta",
        "setenta",
        "oitenta",
        "noventa"
    };

    const char centena[10][15]={
    "",
    "cento",
    "duzentos",
    "trezentos",
    "quatrocentos",
    "quinhentos",
    "seiscentos",
    "setecentos",
    "oitocentos",
    "novecentos"
    };

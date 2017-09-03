/*
================================================================
Desenvolvido pelo Aluno: Carlos Bezerra Vilela
Instituicao: UNICARIOCA - Rio Comprido
Periodo: Terceiro Periodo - Engenharia de Computação
Data: 03/09/2017

Objetivo: Converter nome completo para formato citação.
================================================================
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max 1000

void convert(unsigned char*);



main(){

char nome[Max];
char *separar;
static char *Nome[Max];
int i = 0;

printf("Insira um nome Completo: ");
gets(nome);

convert(&nome);

separar = strtok (nome," ,.-");

  while (separar != NULL)
  {
  Nome[i] = separar;
    separar = strtok (NULL, " ,.-");
  i++;
  }

  i-=1;

printf("\nO seu nome em formato citacao e: %s, ",Nome[i]);

i--;
int x = 0;
for(x = 0;x<=i;x++){
    printf("%c.",Nome[x][0]);
}



}





void convert(unsigned char* convertNome){

int i = 0;
for(i = 0; i<=(strlen(convertNome)-1) ;i++){

if(convertNome[i] == ' '){

    convertNome[i] = ' ';
}else{

if(convertNome[i]>='A' && convertNome[i]<='Z'){
unsigned char x = convertNome[i];
convertNome[i] = x;

}else{

unsigned char x = convertNome[i]-(('a'-'A'));
convertNome[i] = x;

}
}

}


return convertNome;
}




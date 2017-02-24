/*
7-Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos
e mostre-o expresso em horas, minutos e segundos.
*/

#include <stdio.h>

int main (int argc, char** argv[]){

int tempo, horas, minutos, segundos; // usar inteiro para descartar o ponto flutuante do calculo

printf("Insira o tempo de duracao em segundos: ");
scanf("%d", &tempo);

horas = (tempo/60) /60; // TempoTotal em minutos dividido por 60 para converter em horas
minutos = (tempo - ((horas*60)*60)) /60; // TempoTotal em segundos subtraindo por horas em segundos e depois dividindo por 60 para converter em minutos
segundos = tempo - ((horas*60*60)+(minutos*60)); // TempoTotal em segundos subtraindo por Horas em segundos somada com os minutos em segundos

printf("\n\na duracao corresponde a %dh %dm %ds,", horas, minutos, segundos);

return 0;
}

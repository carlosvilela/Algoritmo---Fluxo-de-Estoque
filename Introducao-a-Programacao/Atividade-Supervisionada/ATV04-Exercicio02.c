/*
2- Faça um programa que leia dois números e determine o MMC entre estes
números.
Para ajudar
http://www.somatematica.com.br/fundam/mmc.php
*/


#include <stdio.h>

main (){
	
	int N1, N2, Mult1[11], Mult2[11];
	int Cont1=0, Cont2=0;
	int flag = 0;
	int MMC = 0;
	int i,j;
	
	printf("||====================================================||\n");
	printf("|| Calcula o Minimo Multiplo Comum entre dois numeros ||\n");
	printf("||====================================================||\n\n");
	
	
	printf("Insira o primeiro numero: ");
	scanf ("%d", &N1);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d", &N2);
	
	printf("\n\n");
	
	/*
	Realiza a Multiplicação
	*/
	
	for(i=0; i<=10; i++){

		Mult1[i] = i*N1;
		Mult2[i] = i*N2;
	
	}
		
		
	/*
	Compara quem é o Minimo Multiplo Comum
	*/
	for (i=1; i<=10 && flag==0; i++){
		for(j=1; j<=10; j++){
		
			if (Mult1[i] == Mult2[j]){
				MMC = Mult2[j];
				flag = 1;
			}
		}
	}
	
	/*
	Se o MMC der resultado Zero, logo os numeros N1 e N2 são primos entre si e o MMC é o produtos N1*N2
	*/
	if (MMC==0){
	MMC = N1*N2;
	}
	
	
	
	printf("\n\nMMC = %d\n\n", MMC);	
	
	
	
	
}

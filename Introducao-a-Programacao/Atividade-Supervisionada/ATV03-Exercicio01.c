/*
Faça um programa que leia o número de um CPF, exiba-o e informe se ele é válido ou não.

Ex.:

Informe o CPF << 11144477735

CPF 111.444.777-35 Valido

O link abaixo pode ajudar:

http://www.geradorcpf.com/algoritmo_do_cpf.htm
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main(){
	
	int CPF[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	int somatorio1, digito1, somatorio2, digito2;
	
	char* validade = (char*) malloc(sizeof(char[10]));
	
	
	for (int i=0; i<=10; i++){
		
		printf("|==============================================================|");
		printf("\n|....................VALIDADOR DE CPF..........................|");
		printf("\n|Insira o CPF numero a numero pressionando ENTER para confirmar|");
		printf("\n|Insira 9999 pressionando ENTER para reiniciar em caso de erro.|");
		printf("\n|==============================================================|");
		printf("\n|............CPF: %d%d%d.%d%d%d.%d%d%d-%d%d...............................|", CPF[0],CPF[1],CPF[2],CPF[3],CPF[4],CPF[5],CPF[6],CPF[7],CPF[8],CPF[9],CPF[10]);
		printf("\n|==============================================================|");

		printf("\n\nInsira o numero: ");
		scanf("%d", &CPF[i]);
		
		system("cls");
		
		if (CPF[i] == 9999){
		main();
		}
		
	}	
	

	//CALCULOS ===============================================
	
	somatorio1 = (CPF[0]*10)+(CPF[1]*9)+(CPF[2]*8)+(CPF[3]*7)+(CPF[4]*6)+(CPF[5]*5)+(CPF[6]*4)+(CPF[7]*3)+(CPF[8]*2);
	if ((somatorio1%11) < 2){
		digito1 = 0;
	}else{
	digito1 = abs(11-(somatorio1%11));
	}
	
	
	somatorio2 = (CPF[0]*11)+(CPF[1]*10)+(CPF[2]*9)+(CPF[3]*8)+(CPF[4]*7)+(CPF[5]*6)+(CPF[6]*5)+(CPF[7]*4)+(CPF[8]*3)+(CPF[9]*2);
	if ((somatorio2%11) < 2){
		digito2 = 0;
	}else{
	digito2 = abs(11-(somatorio2%11));
	}
	//========================================================

	
	if (CPF[9] == digito1 && CPF[10]==digito2){
		validade = "VALIDO";
	}else{
		validade = "INVALIDO";
	}


	
		printf("|==============================================================|");
		printf("\n|....................VALIDADOR DE CPF..........................|");
		printf("\n|==============================================================|");
		printf("\n\n CPF: %d%d%d.%d%d%d.%d%d%d-%d%d ", CPF[0],CPF[1],CPF[2],CPF[3],CPF[4],CPF[5],CPF[6],CPF[7],CPF[8],CPF[9],CPF[10]);
		printf("%s\n\n",validade);
		
		//desalocar ponteiro
		validade = NULL;
		free(validade);
}

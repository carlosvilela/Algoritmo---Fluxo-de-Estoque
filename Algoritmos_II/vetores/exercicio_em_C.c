/*
Ler 5 notas; calcular a media; exibir a media, maior nota, quantos sao acima da media
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv[]){
	
	int i, acima = 0;
	float Alunos[4], Media = 0, maior;
	

	printf("Insira a Nota do aluno 01: ", (i+1));
	scanf("%f", &Alunos[0]);
	
	maior = Alunos[0];
	
	system("cls");
	
	for (i = 1; i<=4; i++){
	
	printf("Insira a Nota do aluno 0%d: ", (i+1));
	scanf("%f", &Alunos[i]);
	
	if (maior > Alunos[i]){
		maior = Alunos[i];
	}
	
	
	
	
	system("cls");
}
	
	
	
	i = 0;
	
	while (i<=4){

		Media = Media + Alunos[i];
		
		i++;
	}
	
	
	Media = Media/5;
	
	for (i = 0; i<=4; i++){
		if (Alunos[i]>Media){
			acima = acima +1;
		}
	}
	
	
	
	printf("\n\nA media da turma e: %.2f\nA maior nota e: %.2f\nforam %d acima da media\n", Media, maior, acima);
	
	system("pause>>null");
	
	
	return 0;
}

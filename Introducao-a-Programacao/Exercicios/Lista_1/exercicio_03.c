#include <stdio.h>

int main (int argc, char** argv){
	
	char aluno[50];
	
	printf ("Insira o nome de um aluno da turma: ");
	
	scanf("%[^\n]s", &aluno); // [^\n] significa que pode ler os espaços em branco, porem ele pega o \n do string e pula o proximo scanf, para evitar isso deve usar o setbuf(stdin, NULL);
	setbuf(stdin, NULL);
	
	printf("\n%s - Engenharia da Computacao", aluno);
	
	return 0;
	
}

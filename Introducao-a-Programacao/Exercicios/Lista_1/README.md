Associação Carioca de Ensino Superior
Centro Universitário Carioca

Professora Ma. Catiúscia Borges – Introdução à Programação
INTRODUÇÃO À PROGRAMAÇÃO – LINGUAGEM C

LISTA 01

1- Faça um programa que exiba na tela o seu nome e o seu curso, numa mesma linha.
Exemplo: Catiuscia Borges – Matematica

2- Faça um programa que exiba na tela o seu nome e o seu curso, em linhas distintas.
Exemplo: Catiuscia Borges
 Matematica

3- Faça um programa que leia o nome de um aluno o seu curso e exiba na tela o seu nome e o
seu curso.
Use duas variáveis do tipo char denominadas aluno e curso.

4- Descreva o funcionamento do programa abaixo, ou seja, o que ele faz?
'#'include <stdio.h>
int main( )
{
int x;
scanf("%d",&x);
printf("\n%d",x);
return(0);
}
_____________________________________________________________________________
__________________________________________________________________________

5- Observe o programa e sem compila-lo determine a saída do programa:
'#'include<stdio.h>
main(){
char A, B, C, D;
 A = 'B';
B = 'A';
C = B;
D = 'D';
printf("%c - %c - %c - %c",A,B,C,D);
}
________________________________________________________________

6- Faça um programa que leia o nome de um funcionário, matrícula (com caracteres Alfa
numéricos) e o salário base. Calcule o desconto do vale transporte que é de 6% do salário base
e exiba o nome a matrícula numa mesma linha e na linha seguinte exiba do vale transporte
com duas casas decimais.

7- Faça um programa que leia o valor do raio de uma circunferência em centímetros (suponha
que o usuário sempre informará um número válido, ou seja, maior que zero) e calcule o
comprimento da circunferência e a área, use quatro casas decimais. Admita π = 3,415;

8- Faça um programa que leia um único número inteiro formado por dois dígitos (suponha
que o usuário informará um número entre 10 e 99) e o decomponha em unidade e dezena.
Exemplo:
Digite um número entre 10 e 99 << 38
Este número é formado por 3 dezena(s) e 8 unidade(s).

9- Faça um programa que calcule a média ponderada entre três notas. O usuário deve
informar os pesos (que não precisam ser iguais) e as notas.
Suponha que o usuário informará pesos positivos e notas entre 0 e 10 ambos inclusive.

10- Faça um programa que calcule o valor numérico da expressão abaixo onde A, B, C e D
são números reais informados pelo usuário:
X = 2*B * C – A³
 D² + 6

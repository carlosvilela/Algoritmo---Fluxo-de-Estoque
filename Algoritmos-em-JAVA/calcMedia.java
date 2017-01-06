/**
Algoritmo: Calcular Media dos alunos;
Total de alunos: 10;
Total de Notas: 4;
**/

import java.util.Scanner;

public class calcMedia{
	
	public static void main (String args[]){
		
		String aluno[] = new String[10];
		double notas[][] = new double[10][2];
		double notaTurma, media;
		
		String buffer[] = new String[1];
		
		Scanner in = new Scanner (System.in);
		
		
		int x;
		
		
		System.out.println("<Media dos Alunos - CADASTRO>=============================================");
		System.out.println("");
		
		x = 0;
		while (x<=9){
			
			System.out.print("Insira o nome do "+(x+1)+"(a) aluno: ");
			aluno[x] = in.nextLine();
			System.out.print("Insita a nota da AV1: ");
			notas[x][0] = in.nextDouble();
			System.out.print("Insira a nota da AV2: ");
			notas[x][1] = in.nextDouble();
			buffer[0] = in.nextLine();
			
			x++;
		}
		
		notaTurma= 0;
		media = 0;
		x = 0;
		while (x<=9){
			
			notaTurma = notaTurma + ((notas[x][0] + notas[x][1])/2);
					
		x++;	
		}
		
		media = notaTurma/10;
		
		
		System.out.println("A Media da Turma é: "+media);
	
	
		
		
	}
	
}

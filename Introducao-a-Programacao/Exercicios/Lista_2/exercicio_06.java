/*
Faça um programa em C que leia um nº inteiro e mostre uma mensagem indicando se este
número é par ou ímpar (use o operador %), e se é positivo ou negativo. 
*/

package teste;

import java.util.Scanner;

class Principal{
    public static void main(String args[]){
        
        int x;
        
        Scanner in = new Scanner(System.in);
        
        System.out.print("Insira um numero inteiro: ");
        x = in.nextInt();
        
        if ((x%2)==0){
		System.out.print("\n\nEste numero Par");
	}else{
		System.out.print("\n\nEste numero Impar");
	}
        
        if (x>0){System.out.print(" (Positivo)");}else{System.out.print(" (Negativo)");}
        
        
        
    }
}

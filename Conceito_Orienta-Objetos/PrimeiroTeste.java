package primeiroteste;

import java.util.Scanner;
import java.lang.Double;
import java.lang.String;


public class PrimeiroTeste{
    
    
    public static void main (String args[]){
        
        String nome;
        Double nota1,nota2, media;
        
        Scanner in = new Scanner(System.in);
        
        System.out.printf("Digite o seu nome: ");
        nome = in.nextLine();
        
        System.out.printf("Insira a primeira nota: ");
        nota1 = in.nextDouble();
        
        System.out.printf("Insira a segunda nota: ");
        nota2 = in.nextDouble();
        
        media = (nota1+nota2)/2;
        
        if (media >= 7){
            System.out.println("Aprovado");
        }else{
            System.out.println("Reprovado");
        }
        
        
        System.out.printf("Presado %s, sua media é: %.2f", nome, media);
        
        
    }
    
    
    
    
    
}

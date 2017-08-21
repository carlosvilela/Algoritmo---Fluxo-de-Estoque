package calcarea;

import java.io.PrintStream;
import java.util.Scanner;
import java.lang.String;
import java.lang.Double;


public class Triangulo{
    
    
    public static void main (String args[]){
        
        Scanner in = new Scanner (System.in);
        
        Double base, altura, area;
        
        System.out.printf("Insira a Base: ");
        base = in.nextDouble();
        
        System.out.printf("Insira a Altura: ");
        altura = in.nextDouble();
        
        area = (base*altura)/2;
        
        System.out.printf("Area = %.2f", area);
        
        
        
        
    }
    
    
    
    
    
}

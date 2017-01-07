import java.util.Scanner;

public class Temperatura_C_F {
	
	
	
	static double conversor(char opt, double temp){
		
		double temperatura = 0;
		
			switch (opt){
			
				case ('C'):
				case ('c'):

					temperatura = (temp*1.8)+32;
				
				
				break;
				
				case ('F'):
				case ('f'):
				
					temperatura = (temp-32)/1.8;

				
				break;
				
				default:
				
				System.out.println("ERRO: Não foi confirmado se é C ou F...");
			}
		
		return temperatura;
		}
	
	
	public static void main (String args[]){
	
	char opt;
	double temp, Resultado;
	Scanner in = new Scanner(System.in);
		
	System.out.println("<Conversor de Temperatura>====================================== ");
	
	System. out.print("Digite C para Celsius e F para Fahrenheit (C/F): ");
	opt = in.next().charAt(0);
	
	System.out.print("Insira a temperatura: ");
	temp = in.nextDouble();
	
	Resultado = conversor(opt,temp);
	
	System.out.println ("O Resultado da conversão foi uma temperatura de : "+Resultado+" graus");
	
		
	
	}
	
}

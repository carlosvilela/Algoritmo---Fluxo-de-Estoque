
import java.util.Scanner;

public class VelocidadeMedia{
	
	public static void main (String args[]){
		
		double Si, Sf; // em Metros
		int Ti, Tf; // em Segundos
		
		Scanner in = new Scanner(System.in);
		
		System.out.println("<Calcular Velocidade Média>====================================");
		
		System.out.print("Insira o Espaço Inicial (metros): ");
		Si = in.nextDouble();
		
		System.out.print("Insira o Espaço Final (metros): ");
		Sf = in.nextDouble();
		
		System.out.print("Insira o Tempo Inicial (segundos): ");
		Ti = in.nextInt();
		
		System.out.print("Insira o Tempo Final: ");
		Tf = in.nextInt();
		
		Vm (Si, Sf, Ti, Tf);
		
	}
	
	public static void Vm (double Si, double Sf, int Ti, int Tf){
		
		double Vm;
		
		Vm = (Sf-Si)/(Tf-Ti);
		
		System.out.println("Velocidade Média: "+Vm+" m/s");
		
	}
	
}

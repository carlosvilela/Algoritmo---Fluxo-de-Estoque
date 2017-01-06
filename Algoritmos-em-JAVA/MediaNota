import java.util.Scanner;

public class MediaNota{
	
	public static void main (String args[]){
	
	String Nome;
	double av1, av2, av3, media;
	av1 = 0; av2 = 0; av3 = 0; media = 0;
	int i = 0;
	
	Scanner in = new Scanner(System.in);
	
	
	System.out.print("Insira o seu nome: ");
	Nome = in.nextLine();
	
	System.out.print("Insira a Nota da AV1: ");
	av1 = in.nextDouble();
	
	System.out.print("Insira a Nota da AV2: ");
	av2 = in.nextDouble();
	
			if (av1>av2){ i = 1; }else{
				if (av2>av1){ i = 2; } else{ i = 0;}
			}
	
	
			if ((((av1+av2)/2)<7)){
	
				System.out.println("Você terá que fazer a AV3, pois sua media é inferior a 7");
	
				System.out.print("Insira a sua nota da AV3: ");
				av3 = in.nextDouble();
				
				if (i == 1) {media = (av1+av3)/2;}else{ media = (av2+av3)/2;}
	
			}else{ media = (av1+av2)/2;}
			
			
			System.out.println("Prezado "+Nome+", Você obteve a Média: "+media);
			
			if (media>=7){
				
				System.out.println("Você foi APROVADO...");
				
				} else{
					
					System.out.println("Você foi REPROVADO...");
				}
			
	}
	
		
}
	

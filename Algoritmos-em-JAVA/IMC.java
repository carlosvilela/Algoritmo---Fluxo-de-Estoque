import java.util.Scanner;

public class IMC{
	
	static double imc (double alt, double peso){
		
		double result;
		
		result = peso/(Math.pow(alt,2));
		
		return result;
	}
	
	
	public static void tabela (double indice){
		
		if (indice<17){
			
			System.out.println("Você está muito abaixo do peso...");
			
			} else{ if (indice<18.49){
				System.out.println("Você está abaixo do peso...");
				
				}else{ if (indice <24.99){
					System.out.println("Você está no peso ideal..");
					}else{ if (indice<29.99){
						System.out.println("Você está acima do peso...");
						}else{if (indice<34.99){
							System.out.println("Você está no estágio de Obesidade 1...");
							}else{ if (indice<39.99){
								System.out.println("Vocẽ está no estágio de Obesidade 2...");
								}else{ if (indice>40){
									System.out.println("Você está no estágio de obesidade 3...");
								}
							}
						}
					}
				}
			}
		}
		
	}
	
	public static void main (String args[]){
		
		double altura, peso, calc;
		String buffer;
		
		Scanner in = new Scanner(System.in);
				
		System.out.println("<Descubra o seu Indice de Massa Corporal>====================");
		
		System.out.print("Insira sua Altura: ");
		altura = in.nextDouble();
		
		System.out.print("Insira o seu Peso: ");
		peso = in.nextDouble();
		
		calc = imc(altura, peso);
		
		tabela(calc);
		
	}
}

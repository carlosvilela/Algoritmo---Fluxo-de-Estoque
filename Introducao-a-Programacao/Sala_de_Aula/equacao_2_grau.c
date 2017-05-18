#include <stdio.h>
#include <math.h>

float a, b, c;
float d, x1, x2;

void delta(){

	b = pow(b, 2);
	
	d = b - (4*a*c);
	
}


void coeficientes(){
	
	
	if (d > 0){
		printf("\n\nA equacao possui duas raizes reais e diferentes...");
		
		x1 = (((b)*(-1)) + pow(d, 0.5))/(2*a);
		
		x2 = (((b)*(-1)) - pow(d, 0.5))/(2*a);
		
		
		printf("X1 = %.2f\nX2 = %.2f\n\n", x1, x2);
		
		
	}else{
		
		if (d==0){
			printf("\n\nA equacao possui uma unica raiz real...");
			
			x1 = (((b)*(-1)))/(2*a);
			
			printf("X = %.2f\n\n", x1);
			
		}else{
			
			printf("\n\nA equacao nao possui raizes reais...");
			
			
			
		}
		
		
	}

	
	
}



main(){
	
	
	printf("Insira o valor de a: ");
	scanf("%f", &a);

	printf("Insira o valor de b: ");
	scanf("%f", &b);

	printf("Insira o valor de c: ");
	scanf("%f", &c);
	
	delta();
	
	coeficientes();
	
	
}

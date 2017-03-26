/*
Escreva um programa que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é Acutângulo, Retângulo ou Obtusângulo. Sendo que:


- Triângulo Retângulo: possui um ângulo reto. (igual a 90º)
- Triângulo Obtusângulo: possui um ângulo obtuso. (maior que 90º)
- Triângulo Acutângulo: possui três ângulos agudos. (menor que 90º)
*/

#include <stdio.h>
#include <stdlib.h>

main(){
	float angulo1, angulo2, angulo3;
	char *triangulo = (char*) malloc(sizeof(char[10]));
	triangulo = "";
	
	printf("Verificando o tipo do Triangulo\n\n");
	
	printf("Insira o primeiro angulo: ");
	scanf("%f", &angulo1);
	
	printf("Insira o segundo angulo: ");
	scanf("%f", &angulo2);
	
	printf("Insira o terceiro angulo: ");
	scanf("%f", &angulo3);
	
if (angulo1<90 && angulo2<90 && angulo3<90){
	triangulo = "Este e um Triangulo Acutangulo";	
}else{
	if((((angulo1>90) xor (angulo2>90) xor (angulo3>90)) != (angulo1>90 && angulo2>90 && angulo3>90))){
		triangulo = "Este e um Triangulo Obtusangulo";
	}else{
		if (((angulo1==90) xor (angulo2==90) xor (angulo3==90)) != (angulo1==90 && angulo2==90 && angulo3==90))
		{
		
		triangulo = "Este e um Triangulo Retangulo";
	}else{
	triangulo = "Este triangulo não foi localizado";
}
}
}
	printf("\n\n%s",triangulo);
	
}

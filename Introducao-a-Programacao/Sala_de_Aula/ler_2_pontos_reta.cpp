#include <stdio.h>
#include <stdlib.h>


float x1, x2;
float y1, y2;
float a, b;




void ler (){
	
	
	do{
	
	printf("Referente a Reta A\n");
	printf("Insira o primeiro ponto: ");
	scanf("%f", &x1);
	printf("Insira o segundo ponto: ");
	scanf("%f", &y1);
	
	printf("\n\n");
	
	printf("Referente a Reta B\n");
	printf("Insira o primeiro ponto: ");
	scanf("%f", &x2);
	printf("Insira o segundo ponto: ");
	scanf("%f", &y2);
	
	system("cls");
	
}while(x1==x2 && y1==y2);

	printf("\n\nA = (%.2f, %.2f)\n", x1,y1);
	printf("B = (%.2f, %.2f)\n", x2,y2);

	
}



main(){
	
	
	for(;;){
		
ler();

if (y1 == y2){
printf("Eq. da Reta : y = y1 => y = %.2f", y1);
}else{
	if (x1 == x2){
		printf("Eq. da Reta : x = x1 => x = %.2f", x1);
	}
}


a = (y1-y2)/(x1-x2);
b = y1 - (a*x1);

printf("\n\na = (%.2f - %.2f)/(%.2f - %.2f)\na = %.2f\n", y1, y2, x1, x2, a);
printf("\nb = %.2f - (%.2f * %.2f)\nb = %.2f", y1, a, x1, b);


if (a!=0 && b !=0){

printf("\n\ny = %.2fx + %.2f\n\n", a, b);

}else{
	
	if (a==0 && b!=0){
		
		printf("\n\ny = %.2f\n\n", b);
	}else{
		
		
		
		
		
	}
	
}



printf("\n\nPressione ENTER para continuar");
system("pause>>null");
system("cls");
	
}
	
	
}

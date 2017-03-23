#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv[]){
	
	int i,x,fat, flag = 0;
	
	while (flag == 0){
	
	printf ("Insira o numero: ");
	scanf("%d", &x);
	
	system("cls");
	
	if (x<0){
	}else{
	
	
	printf ("\n%d! => ", x);
	
	i=1;
	fat = 1;
	
	while (i<=x){
		
		fat = fat*(x-i+1);
	printf("%d ", (x-i+1));
		
		
				
		i++;
	}	
flag =1;	
}
}

	printf("= %d", fat);
	
	
	
	return 0;
}

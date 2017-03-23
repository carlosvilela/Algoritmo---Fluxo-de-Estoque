#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv[]){
	
	int i,x,fat;
	
	printf ("Insira o numero: ");
	scanf("%d", &x);
	
	printf ("\n%d! => ", x);
	
	i=1;
	fat = 1;
	
	while (i<=x){
		
		fat = fat*(x-i+1);
	printf("%d ", (x-i+1));
		
		
				
		i++;
	}	
	
	printf("= %d", fat);
	
	
	
	return 0;
}

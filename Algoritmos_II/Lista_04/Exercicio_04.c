/*

*/

#include <stdio.h>
#include <string.h>

int main (int argc, char** argv){

	char S1[] = "INFORMATICA";
	char S2[] = "TECNOLOGIAS";
	int x = (strlen(S1)-1);

	char Troca[x];
	
	
	
	for (int i = 0; i<=x; i++){

		if (i%2 == 0){
		
		Troca[i] = S1[i];
	}else{
		Troca[i] = S2[i];
	}
		
	}
	
	printf("\n\nS1: %s", S1);
	printf("\nS2: %s", S2);
	printf("\nTroca S1[i] para S2[i] se i for par: %s", Troca);
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	int C, i, N;
	scanf("%d", &C);
	
	for(i = 0; i < C; i++){
		scanf("%d", &N);
		
		
		if(N > 8000)
		printf("Mais de 8000!\n");
		
		else
		printf("Inseto!\n");		
	}
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[]) {
	
	int vet[12], x, y, soma;
	int i;
	
	
	for(i=1; i<=12; i++){
		
		printf("Preencha a [%d] posicao do vetor: ", i);
			scanf("%d", &vet[i]);	
	}
	
	printf("Qual posicao do primeiro vetor que voce quer somar?\n");
		scanf("%d", &x);
		
	printf("Qual posicao do segundo vetor?\n");
		scanf("%d", &y);
		
	soma = (vet[x] + vet[y]);
	 
	printf("O valor da soma dos vetores e: %d\n", soma);

	getchar();
	return 0;
	
}


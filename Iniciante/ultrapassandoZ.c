#include "stdio.h"

int main(){
	int numX, numZ, soma, cont;

	scanf("%d", &numX);
	do{
		scanf("%d", &numZ);
	}while(numZ<=numX);

	soma = 0;
	cont = 0;
	while(soma<=numZ){
		soma = soma + numX;
		cont++;
		numX++;
	}

	printf("%d\n", cont);
}
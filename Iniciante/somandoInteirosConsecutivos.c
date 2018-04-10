#include <stdio.h>

int main(){
	int numA, numN, soma, cont;

	scanf("%d", &numA);
	do{
		scanf("%d", &numN);
	}while(numN<=0);

	soma = 0;
	for(cont=0;cont<numN;cont++){
		soma = soma + numA;
		numA++;
	}
	printf("%d\n", soma);
}
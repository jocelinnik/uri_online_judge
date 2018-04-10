#include <stdio.h>

int main(){
	int vet[10], cont, valor;

	for(cont=0;cont<10;cont++){
		scanf("%d", &valor);
		vet[cont] = valor;
		if(vet[cont]<=0){
			vet[cont] = 1;
		}
	}

	for(cont=0;cont<10;cont++){
		printf("X[%d] = %d\n", cont, vet[cont]);
	}

}
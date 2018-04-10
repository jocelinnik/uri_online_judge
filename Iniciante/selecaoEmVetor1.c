#include "stdio.h"

int main(){
	double vet[100], valor;
	int cont;

	for(cont=0;cont<100;cont++){
		scanf("%lf", &valor);
		vet[cont] = valor;
	}

	for(cont=0;cont<100;cont++){
		if(vet[cont]<=10.0){
			printf("A[%d] = %.1lf\n", cont, vet[cont]);
		}
	}
}
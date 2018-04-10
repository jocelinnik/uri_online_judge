#include <stdio.h>

int main(){
	int vet[10], valor, cont;

	scanf("%d", &valor);
	for(cont=0;cont<10;cont++){
		vet[cont] = valor;
		printf("N[%d] = %d\n", cont, vet[cont]);
		valor = valor*2;
	}
}
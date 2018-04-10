#include <stdio.h>

int main(){
	int valor, soma, cont;

	scanf("%d", &valor);
	while(valor!=0){
		if(valor%2!=0){
			valor++;
		}
		soma = 0;
		for(cont=0;cont<5;cont++){
			soma = soma + valor;
			valor+=2;
		}
		printf("%d\n", soma);
		scanf("%d", &valor);
	}
}
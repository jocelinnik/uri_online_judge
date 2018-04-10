#include <stdio.h>

int main(){
	int entrada, cont, pares;

	pares = 0;
	for(cont=0;cont<5;cont++){
		scanf("%d", &entrada);
		if(entrada%2==0){
			pares++;
		}
	}

	printf("%d valores pares\n", pares);
}
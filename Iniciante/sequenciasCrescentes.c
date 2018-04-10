#include <stdio.h>

int main(){
	int valor, cont;

	scanf("%d", &valor);
	while(valor>0){
		for(cont=1;cont<valor;cont++){
			printf("%d ", cont);
		}
		printf("%d\n", cont);
		scanf("%d", &valor);
	}
}
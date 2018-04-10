#include <stdio.h>

int main(){
	int entrada, cont;

	scanf("%d", &entrada);

	for(cont=1;cont<=entrada;cont+=2){
		printf("%d\n", cont);
	}
}
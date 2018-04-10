#include <stdio.h>

int main(){
	int num, fatorial,cont;

	scanf("%d", &num);
	fatorial = 1;
	for(cont=1;cont<=num;cont++){
		fatorial = fatorial*cont;
	}
	printf("%d\n", fatorial);
}
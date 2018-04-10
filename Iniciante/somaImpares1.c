#include <stdio.h>

int main(){
	int num1, num2, soma, cont;

	scanf("%d %d", &num1, &num2);

	if(num1>num2){
		int aux = num1;
		num1 = num2;
		num2 = aux;
	}

	soma = 0;
	for(cont=(num1+1);cont<num2;cont++){
		if(cont%2!=0){
			soma = soma + cont;
		}
	}

	printf("%d\n", soma);
}
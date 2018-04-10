#include "stdio.h"

int main(){
	int num1, num2, soma, cont;

	do{
		scanf("%d %d", &num1, &num2);
		if((num1>0)&&(num2>0)){
			if(num1>num2){
				int aux = num1;
				num1 = num2;
				num2 = aux;
			}

			soma = 0;
			for(cont=num1;cont<=num2;cont++){
				printf("%d ", cont);
				soma = soma + cont;
			}
			printf("Sum=%d\n", soma);
		}
	}while((num1>0)&&(num2>0));
}
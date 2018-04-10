#include <stdio.h>

int main(){
	int casos, num1, num2, soma, cont, cont2;

	scanf("%d", &casos);

	for(cont=0;cont<casos;cont++){
		soma = 0;
		scanf("%d %d", &num1, &num2);
		if(num1>num2){
			int aux = num1;
			num1 = num2;
			num2 = aux;
		}
		for(cont2=(num1+1);cont2<num2;cont2++){
			if(cont2%2!=0){
				soma = soma + cont2;
			}
		}
		printf("%d\n", soma);
	}
}
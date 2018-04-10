#include <stdio.h>

int main(){
	int valor, casos, cont, cont2, soma;

	scanf("%d", &casos);
	for(cont=0;cont<casos;cont++){
		scanf("%d", &valor);
		soma = 0;
		for(cont2=1;cont2<valor;cont2++){
			if(valor%cont2==0){
				soma = soma + cont2;
			}
		}
		if(soma==valor){
			printf("%d eh perfeito\n", valor);
		}else{
			printf("%d nao eh perfeito\n", valor);
		}
	}
}
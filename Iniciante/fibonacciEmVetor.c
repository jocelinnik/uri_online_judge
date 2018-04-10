#include "stdio.h"

int main(){
	long long int fibo, ant, ant2;
	int casos, posicao, entrada, cont, cont2;

	scanf("%d", &casos);
	for(cont=0;cont<casos;cont++){
		scanf("%d", &entrada);
		if(entrada==0){
			fibo = 0;
		}else if(entrada<=2){
			fibo = 1;
		}else{
			ant2 = 0;
			ant = 1;
			for(cont2=2;cont2<=entrada;cont2++){
				fibo = ant + ant2;
				ant2 = ant;
				ant = fibo;
			}
		}
		printf("Fib(%d) = %lld\n", entrada, fibo);
	}
}


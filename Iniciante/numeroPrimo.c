#include <stdio.h>

int main(){
	int casos, valor, cont, cont2, primo;

	scanf("%d", &casos);
	for(cont2=0;cont2<casos;cont2++){
		scanf("%d", &valor);
		if(valor==0){
			printf("%d nao eh primo\n", valor);
		}else if(valor==1){
			printf("%d eh primo\n", valor);
		}else{
			primo = 1;
			for(cont=2;cont<valor;cont++){
				if(valor%cont==0){
					primo = 0;
				}
			}
			if(primo==1){
				printf("%d eh primo\n", valor);
			}else{
				printf("%d nao eh primo\n", valor);
			}
		}
	}
}
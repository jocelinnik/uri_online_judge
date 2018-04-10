#include <stdio.h>

int main(){
	int cont, entrada, maior, posicao;

	scanf("%d", &entrada);
	maior = entrada;
	posicao = 1;

	for(cont=2;cont<=100;cont++){
		scanf("%d", &entrada);
		if(entrada>maior){
			maior = entrada;
			posicao = cont;
		}
	}

	printf("%d\n%d\n", maior, posicao);
}
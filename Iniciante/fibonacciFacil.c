#include "stdio.h"

int main(){
	int repeticao, ant2, ant, atual, cont;

	ant2 = 0;
	ant = 1;
	scanf("%d", &repeticao);
	switch(repeticao){
		case 1: printf("%d\n", ant2);
				break;
		case 2: printf("%d %d\n", ant2, ant);
				break;
		default: printf("%d %d ", ant2, ant);
				 atual = ant2 + ant;
				 for(cont=3;cont<repeticao;cont++){
				 	printf("%d ", atual);
				 	ant2 = ant;
				 	ant = atual;
				 	atual = ant2 + ant;
				 }
				 printf("%d\n", atual);
				 break;
	}
}
#include "stdio.h"

int main(){
	int i, j, cont;

	i = 1;
	j = 7;

	while(i<=9){
		cont = 0;
		while(cont<3){
			printf("I=%d J=%d\n", i, j);
			j--;
			cont++;
		}
		i+=2;
		j+=5;
	}
}
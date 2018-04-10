#include "stdio.h"

int main(){
	int i, j;

	i = 1;
	while(i<=9){
		j = 7;
		while(j>=5){
			printf("I=%d J=%d\n", i, j);
			j--;
		}
		i+=2;
	}
}
#include <stdio.h>

int main(){
	int entrada, cont;

	scanf("%d", &entrada);

	for(cont=1;cont<=10000;cont++){
		if(cont%entrada==2){
			printf("%d\n", cont);
		}
	}
}
#include <stdio.h>

int main(){
	int entrada, cont;

	scanf("%d", &entrada);

	if(entrada%2==0){
		entrada++;
	}

	for(cont=0;cont<6;cont++){
		printf("%d\n", entrada);
		entrada+=2;
	}
}
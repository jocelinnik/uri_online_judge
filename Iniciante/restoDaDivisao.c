#include "stdio.h"

int main(){
	int num1, num2, cont;

	scanf("%d %d", &num1, &num2);
	if(num1>num2){
		int aux = num1;
		num1 = num2;
		num2 = aux;
	}
	for(cont=(num1+1);cont<num2;cont++){
		if((cont%5==2)||(cont%5==3)){
			printf("%d\n", cont);
		}
	}
}
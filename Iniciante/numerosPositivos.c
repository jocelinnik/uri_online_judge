#include <stdio.h>

int main(){
	int cont, acum;
	float num;

	acum = 0;
	for(cont=0;cont<6;cont++){
		scanf("%f", &num);
		if(num>0){
			acum++;
		}
	}

	printf("%d valores positivos\n", acum);
}
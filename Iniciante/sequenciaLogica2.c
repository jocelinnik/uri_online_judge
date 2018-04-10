#include "stdio.h"

int main(){
	int numx, numy, cont1, cont2;

	scanf("%d %d", &numx, &numy);

	cont1 = 1;
	while(cont1<=numy){
		for(cont2=1;cont2<numx;cont2++){
			printf("%d ", cont1);
			cont1++;
		}
		printf("%d\n", cont1);
		cont1++;
	}
}
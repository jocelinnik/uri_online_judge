#include <stdio.h>

int main(){
	int numX, numY, casos, cont;
	double divisao;

	scanf("%d", &casos);
	for(cont=0;cont<casos;cont++){
		scanf("%d %d", &numX, &numY);
		if(numY!=0){
			divisao = (double)numX/numY;
			printf("%.1lf\n", divisao);
		}else{
			printf("divisao impossivel\n");
		}
	}

}
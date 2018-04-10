#include "stdio.h"

int main(){
	double serie;
	int cont;

	serie = 0.0;
	for(cont=1;cont<=100;cont++){
		serie = serie + ((double)1/cont);
	}
	printf("%.2lf\n", serie);
}
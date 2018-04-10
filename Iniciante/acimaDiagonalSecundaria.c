#include "stdio.h"

int main(){
	double mat[12][12], soma, media, valor;
	char op;
	int conti, contj, div, tamC;

	scanf("%c", &op);
	for(conti=0;conti<12;conti++){
		for(contj=0;contj<12;contj++){
			scanf("%lf", &valor);
			mat[conti][contj] = valor;
		}
	}

	soma = 0.0;
	media = 0.0;
	div = 0;
	conti = 0;
	tamC = 10;
	while((conti<11)&&(tamC>=0)){
		for(contj=0;contj<=tamC;contj++){
			soma = soma + mat[conti][contj];
			div++;
		}
		conti++;
		tamC--;
	}
	

	if(op=='S'){
		printf("%.1lf\n", soma);
	}else{
		if(op=='M'){
			media = soma/(double)div;
			printf("%.1lf\n", media);
		}
	}
}
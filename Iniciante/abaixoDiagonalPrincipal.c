#include "stdio.h"

int main(){
	double mat[12][12], soma, media, valor;
	char op;
	int conti, contj, div;

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
	for(conti=0;conti<12;conti++){
		for(contj=0;contj<12;contj++){
			if(conti>contj){
				soma = soma + mat[conti][contj];
				div++;
			}
		}
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
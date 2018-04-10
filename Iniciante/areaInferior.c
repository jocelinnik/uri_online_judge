#include "stdio.h"

int main(){
	double mat[12][12], soma, media;
	int conti, contj, minC, maxC, div;
	char op;

	scanf("%c", &op);
	for(conti=0;conti<12;conti++){
		for(contj=0;contj<12;contj++){
			scanf("%lf", &mat[conti][contj]);
		}
	}

	conti = 11;
	minC = 1;
	maxC = 10;
	soma = 0.0;
	media = 0.0;
	div = 0;

	while((conti>=7)&&(maxC>=6)){
		for(contj=minC;contj<=maxC;contj++){
			soma = soma + mat[conti][contj];
			div++;
		}
		minC++;
		maxC--;
		conti--;
	}

	media = soma/(double)div;

	if(op=='S'){
		printf("%.1lf\n", soma);
	}else if(op=='M'){
		printf("%.1lf\n", media);
	}

}
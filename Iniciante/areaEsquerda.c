#include "stdio.h"

int main(){
	double mat[12][12], soma, media;
	int conti, contj, minL, maxL, div;
	char op;

	scanf("%c", &op);
	for(conti=0;conti<12;conti++){
		for(contj=0;contj<12;contj++){
			scanf("%lf", &mat[conti][contj]);
		}
	}

	minL = 1;
	maxL = 10;
	div = 0;
	soma = 0.0;
	media = 0.0;
	contj = 0;
	while((contj<5)&&(maxL>=6)){
		conti = minL;
		while(conti<=maxL){
			soma = soma + mat[conti][contj];
			div++;
			conti++;
		}
		minL++;
		maxL--;
		contj++;
	}
	

	media = soma/(double)div;
	if(op=='S'){
		printf("%.1lf\n", soma);
	}else if(op=='M'){
		printf("%.1lf\n", media);
	}
}
#include <stdio.h>

int main(){
	int i, j, cont;
	float novoI, novoJ;

	i = 0;
	j = 1;

	for(cont=0;j<=3;cont++){
		printf("I=%d J=%d\n", i, j);
		j++;
	}

	novoI = (float)i;
	novoJ = (float)j;

	novoI+=0.2;
	novoJ = 1.0;
	novoJ+=0.2;

	cont = 0;
	while(novoI<1.0){
		cont = 0;
		while(cont<3){
			printf("I=%.1f J=%.1f\n", novoI, novoJ);
			novoJ+=1.0;
			cont++;
		}
		novoI+=0.2;
		novoJ+=0.2;
		novoJ-=3.0;
	}

	i = (int)novoI;
	j = (int)novoJ;
	j++;

	for(cont=0;cont<3;cont++){
		printf("I=%d J=%d\n", i, j);
		j++;
	}

	novoI = (float)i;
	novoJ = (float)j;

	novoI+=0.2;
	novoJ-=3.0;
	novoJ+=0.2;

	cont = 0;
	while(novoI<2.0){
		cont = 0;
		while(cont<3){
			printf("I=%.1f J=%.1f\n", novoI, novoJ);
			novoJ+=1.0;
			cont++;
		}
		novoI+=0.2;
		novoJ-=3.0;
		novoJ+=0.2;
	}


	i = (int)novoI;
	j = (int)novoJ;
	j++;
	for(cont=0;cont<3;cont++){
		printf("I=%d J=%d\n", i, j);
		j++;
	}
}
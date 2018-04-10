#include <stdio.h>

int main(){
	int casos, popA, popB, crescA, crescB, anos, cont;
	double taxaA, taxaB;

	scanf("%d", &casos);
	for(cont=0;cont<casos;cont++){
		scanf("%d %d %lf %lf", &popA, &popB, &taxaA, &taxaB);

		taxaA = taxaA/100;
		taxaB = taxaB/100;
		anos = 0;

		do{
			crescA = popA*taxaA;
			crescB = popB*taxaB;
			popA = popA + crescA;
			popB = popB + crescB;
			anos++;
		}while((popA<=popB)&&(anos<=100));

		if(anos>100){
			printf("Mais de 1 seculo.\n");
		}else{
			printf("%d anos.\n", anos);
		}
	}
}
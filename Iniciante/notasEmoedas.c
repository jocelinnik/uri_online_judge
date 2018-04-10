#include <stdio.h>

int main(){
	int notas100, notas50, notas20, notas10, notas5, notas2;
	int moeda, moedas1, moedas50, moedas25, moedas10, moedas05, moedas01;
	double entrada;

	scanf("%lf", &entrada);

	notas100 = entrada/100;
	entrada = entrada - (notas100*100);
	notas50 = entrada/50;
	entrada = entrada - (notas50*50);
	notas20 = entrada/20;
	entrada = entrada - (notas20*20);
	notas10 = entrada/10;
	entrada = entrada - (notas10*10);
	notas5 = entrada/5;
	entrada = entrada - (notas5*5);
	notas2 = entrada/2;
	entrada = entrada - (notas2*2);
	
	entrada = entrada*100;
	moeda = (int)entrada;

	moedas1 = moeda/100;
	moeda = moeda - (moedas1*100);
	moedas50 = moeda/50;
	moeda = moeda - (moedas50*50);
	moedas25 = moeda/25;
	moeda = moeda - (moedas25*25);
	moedas10 = moeda/10;
	moeda = moeda - (moedas10*10);
	moedas05 = moeda/5;
	moeda = moeda - (moedas05*5);
	moedas01 = moeda/1;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", notas100);
	printf("%d nota(s) de R$ 50.00\n", notas50);
	printf("%d nota(s) de R$ 20.00\n", notas20);
	printf("%d nota(s) de R$ 10.00\n", notas10);
	printf("%d nota(s) de R$ 5.00\n", notas5);
	printf("%d nota(s) de R$ 2.00\n", notas2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moedas1);
	printf("%d moeda(s) de R$ 0.50\n", moedas50);
	printf("%d moeda(s) de R$ 0.25\n", moedas25);
	printf("%d moeda(s) de R$ 0.10\n", moedas10);
	printf("%d moeda(s) de R$ 0.05\n", moedas05);
	printf("%d moeda(s) de R$ 0.01\n", moedas01);

}
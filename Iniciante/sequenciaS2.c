#include <stdio.h>

int main(){
	double serie;
	int numerador, denominador;

	numerador = 1;
	denominador = 1;
	serie = 0.0;
	while(numerador<=39){
		serie = serie + ((double)numerador/denominador);
		numerador+=2;
		denominador = denominador*2;
	}
	printf("%.2lf\n", serie);
}
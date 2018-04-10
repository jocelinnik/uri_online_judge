#include <stdio.h>

int main(){
	int casos, cont;
	double nota1, nota2, nota3, mediaP;

	scanf("%d", &casos);

	for(cont=0;cont<casos;cont++){
		scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

		nota1 = nota1*2;
		nota2 = nota2*3;
		nota3 = nota3*5;

		mediaP = ((nota1+nota2)+nota3)/10;
		printf("%.1lf\n", mediaP);
	}
}
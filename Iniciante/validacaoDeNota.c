#include <stdio.h>

int main(){
	double nota1, nota2, media;

	media = 0.0;
	do{
		scanf("%lf", &nota1);
		if((nota1<0.0)||(nota1>10.0)){
			printf("nota invalida\n");
		}
	}while((nota1<0.0)||(nota1>10.0));

	do{
		scanf("%lf", &nota2);
		if((nota2<0.0)||(nota2>10.0)){
			printf("nota invalida\n");
		}
	}while((nota2<0.0)||(nota2>10.0));

	media = (nota1+nota2)/2.0;
	printf("media = %.2lf\n", media);

}
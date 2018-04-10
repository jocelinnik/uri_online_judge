#include <stdio.h>
typedef struct nota
{
	
};
int main(){
	double nota1, nota2, media;
	int resposta;

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

	do{
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &resposta);
		if(resposta==1){
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
		}else if(resposta==2) break;
	}while((resposta==1)||(resposta!=1));
}
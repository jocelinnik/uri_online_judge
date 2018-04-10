#include <stdio.h>

int main(){
	int div;
	double idade, media;

	div = 0;
	media = 0.0;
	scanf("%lf", &idade);
	while(idade>=0){
		media = media + idade;
		div++;
		scanf("%lf", &idade);
	}

	media = media/div;
	printf("%.2lf\n", media);
}
#include "stdio.h"

int main(){
	int discagem;

	scanf("%d", &discagem);

	if(discagem==61){
		printf("Brasilia\n");
	}else if(discagem==71){
		printf("Salvador\n");
	}else if(discagem==11){
		printf("Sao Paulo\n");
	}else if(discagem==21){
		printf("Rio de Janeiro\n");
	}else if(discagem==32){
		printf("Juiz de Fora\n");
	}else if(discagem==19){
		printf("Campinas\n");
	}else if(discagem==27){
		printf("Vitoria\n");
	}else if(discagem==31){
		printf("Belo Horizonte\n");
	}else{
		printf("DDD nao cadastrado\n");
	}
}
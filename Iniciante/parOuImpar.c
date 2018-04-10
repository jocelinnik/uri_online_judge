#include <stdio.h>

int main(){
	int casos, entrada, cont;

	scanf("%d", &casos);

	for(cont=0;cont<casos;cont++){
		scanf("%d", &entrada);

		if(entrada>0){
			if(entrada%2==0){
				printf("EVEN POSITIVE\n");
			}else{
				printf("ODD POSITIVE\n");
			}
		}else{
			if(entrada<0){
				if(entrada%2==0){
					printf("EVEN NEGATIVE\n");
				}else{
					printf("ODD NEGATIVE\n");
				}
			}else{
				printf("NULL\n");
			}
		}
	}
}
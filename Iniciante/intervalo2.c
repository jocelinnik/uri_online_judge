#include <stdio.h>

int main(){
	int casos, entrada, cont, dentro, fora;

	scanf("%d", &casos);

	dentro = 0;
	fora = 0;

	for(cont=0;cont<casos;cont++){
		scanf("%d", &entrada);
		if((entrada>=10)&&(entrada<=20)){
			dentro++;
		}else{
			fora++;
		}
	}

	printf("%d in\n%d out\n", dentro, fora);
}
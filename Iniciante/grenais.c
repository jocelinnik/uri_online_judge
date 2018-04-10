#include <stdio.h>

int main(){
	int golsInter, golsGremio, vitoriasInter, vitoriasGremio, empates, resposta, totalGrenais;

	vitoriasInter = 0;
	vitoriasGremio = 0;
	empates = 0;
	totalGrenais = 0;
	do{
		scanf("%d %d", &golsInter, &golsGremio);
		if(golsInter>golsGremio){
			vitoriasInter++;
		}else{
			if(golsInter<golsGremio){
				vitoriasGremio++;
			}else{
				empates++;
			}
		}
		totalGrenais++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &resposta);
	}while(resposta==1);

	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", totalGrenais, vitoriasInter, vitoriasGremio, empates);
	if(vitoriasInter>vitoriasGremio){
		printf("Inter venceu mais\n");
	}else if(vitoriasInter<vitoriasGremio){
		printf("Gremio venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}
}
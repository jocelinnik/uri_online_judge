#include "stdio.h"

int main(){
	int vetPar[5], vetImpar[5], aux, cont, contVetP, contVetI, valor;

	cont = 0;
	contVetP = 0;
	contVetI = 0;
	while(cont<15){
		scanf("%d", &valor);
		if(valor%2==0){
			if(contVetP==5){
				for(aux=0;aux<5;aux++){
					printf("par[%d] = %d\n", aux, vetPar[aux]);
				}
				contVetP = 0;
				vetPar[contVetP] = valor;
				contVetP++;
			}else{
				vetPar[contVetP] = valor;
				contVetP++;
			}
		}else{
			if(contVetI==5){
				for(aux=0;aux<5;aux++){
					printf("impar[%d] = %d\n", aux, vetImpar[aux]);
				}
				contVetI = 0;
				vetImpar[contVetI] = valor;
				contVetI++;
			}else{
				vetImpar[contVetI] = valor;
				contVetI++;
			}
		}
		cont++;
	}
	for(cont=0;cont<contVetI;cont++){
		printf("impar[%d] = %d\n", cont, vetImpar[cont]);
	}
	for(cont=0;cont<contVetP;cont++){
		printf("par[%d] = %d\n", cont, vetPar[cont]);
	}
}
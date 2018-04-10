#include "stdio.h"

int main(){
	int contGas, contAlcool, contDiesel, codigo;

	contAlcool = 0;
	contGas = 0;
	contDiesel = 0;
	do{
		do{
			scanf("%d", &codigo);
		}while((codigo<1)||(codigo>4));
		if(codigo==1){
			contAlcool++;
		}else if(codigo==2){
			contGas++;
		}else if(codigo==3){
			contDiesel++;
		}
	}while(((codigo==1)||(codigo==2))||(codigo==3));

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", contAlcool, contGas, contDiesel);
}
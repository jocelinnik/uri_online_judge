#include <stdio.h>

int main(){
	int senha, entrada;

	senha = 2002;

	do{
		scanf("%d", &entrada);
		if(entrada!=senha){
			printf("Senha Invalida\n");
		}else{
			printf("Acesso Permitido\n");
		}
	}while(entrada!=senha);
}
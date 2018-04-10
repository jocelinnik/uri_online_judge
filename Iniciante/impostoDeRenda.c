#include <stdio.h>

int main(){
	double salario, imposto;

	scanf("%lf", &salario);

	if((salario>=0)&&(salario<=2000)){
		printf("Isento\n");
	}else{
		if((salario>2000)&&(salario<=3000)){
			salario = salario-2000;
			imposto = salario*0.08;

			printf("R$ %.2lf\n", imposto);
		}else{
			if((salario>3000)&&(salario<=4500)){
				salario = salario-2000;
				salario = salario-1000;
				imposto = (1000*0.08)+(salario*0.18);
				printf("R$ %.2lf\n", imposto);
			}else{
				if(salario>4500){
					salario = salario-2000;
					salario = salario-1000;
					salario = salario-1500;
					imposto = ((1000*0.08) + (1500*0.18)) + salario*0.28;
					printf("R$ %.2lf\n", imposto);
				}
			}
		}
	}
}
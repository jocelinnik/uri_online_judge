#include <stdio.h>

int main(){
	int num1, num2, casos, soma, cont1, cont2;

	scanf("%d", &casos);

	for(cont1=0;cont1<casos;cont1++){
		scanf("%d %d", &num1, &num2);
		if(num1%2==0){
			num1++;
		}
		soma = 0;
		for(cont2=0;cont2<num2;cont2++){
			soma = soma + num1;
			num1+=2;
		}
		printf("%d\n", soma);
	}
}
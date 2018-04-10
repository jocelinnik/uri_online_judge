#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1, num2, numA, numB, quoc, mod, mod2;

	scanf("%d %d", &num1, &num2);
	quoc = num1/num2;
	mod = num1%num2;

	mod2 = abs(mod);
	numB = (quoc*num2) + mod2;
	numA = num1 + (num1 - numB);

	if(mod<0){
		mod2 = numA - num1;
		mod2 = abs(mod2);
		quoc = numA/num2;
	}
	printf("%d %d\n", quoc, mod2);
}
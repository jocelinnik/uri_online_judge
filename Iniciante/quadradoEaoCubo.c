#include <stdio.h>

int main(){
	int linhas, cont, quadrado, cubo;

	scanf("%d", &linhas);
	for(cont=1;cont<=linhas;cont++){
		quadrado = cont*cont;
		cubo = quadrado*cont;
		printf("%d %d %d\n", cont, quadrado, cubo);
	}
}
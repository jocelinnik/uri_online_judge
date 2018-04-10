#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char* str1, str2;
	int casos, cont;

	str = (char *)malloc(sizeof())

	scanf("%d", &casos);
	for(cont=1;cont<=casos;cont++){
		scanf("%s %s", str1, str2);

		if(strcmp(str1,str2)==0){
			printf("Caso #%d: De novo!\n", cont);
		}else if(strcmp(str1,"pedra")==0&&strcmp(str2,"papel")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"pedra")==0&&strcmp(str2,"tesoura")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"pedra")==0&&strcmp(str2,"lagarto")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"pedra")==0&&strcmp(str2,"Spock")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"papel")==0&&strcmp(str2,"pedra")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"papel")==0&&strcmp(str2,"tesoura")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"papel")==0&&strcmp(str2,"lagarto")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"papel")==0&&strcmp(str2,"Spock")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"tesoura")==0&&strcmp(str2,"pedra")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"tesoura")==0&&strcmp(str2,"papel")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"tesoura")==0&&strcmp(str2,"lagarto")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"tesoura")==0&&strcmp(str2,"Spock")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"lagarto")==0&&strcmp(str2,"pedra")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"lagarto")==0&&strcmp(str2,"papel")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"lagarto")==0&&strcmp(str2,"tesoura")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"lagarto")==0&&strcmp(str2,"Spock")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"Spock")==0&&strcmp(str2,"pedra")==0){ 
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"Spock")==0&&strcmp(str2,"papel")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}else if(strcmp(str1,"Spock")==0&&strcmp(str2,"tesoura")==0){
			printf("Caso #%d: Bazinga!\n", cont);
		}else if(strcmp(str1,"Spock")==0&&strcmp(str2,"lagarto")==0){
			printf("Caso #%d: Raj trapaceou!\n", cont);
		}
	} 
}
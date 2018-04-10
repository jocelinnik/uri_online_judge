#include "stdio.h"
#include "stdlib.h"

int main(){
	int temp1, temp2, temp3;

	scanf("%d %d %d", &temp1, &temp2, &temp3);

	if((temp2<temp1)&&(temp3>=temp2)){
		printf(":)\n");
	}else if((temp2>temp1)&&(temp3<=temp2)){
		printf(":(\n");
	}else if(((temp2>temp1)&&(temp3>temp2))&&(abs(temp2-temp3)<abs(temp1-temp2))){
		printf(":(\n");
	}else if(((temp2>temp1)&&(temp3>temp2))&&(abs(temp2-temp3)>=abs(temp1-temp2))){
		printf(":)\n");
	}else if(((temp2<temp1)&&(temp3<temp2))&&(abs(temp2-temp3)<abs(temp1-temp2))){
		printf(":)\n");
	}else if(((temp2<temp1)&&(temp3<temp2))&&(abs(temp2-temp3)>=abs(temp1-temp2))){
		printf(":(\n");
	}else if((temp1==temp2)&&(temp3>temp2)){
		printf(":)\n");
	}else if((temp1==temp2)&&(temp3<temp2)){
		printf(":(\n");
	}
}
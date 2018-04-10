#include <stdio.h>
#include <stdlib.h>

int main(){
	int diaI, horaI, minutoI, segundoI, diaF, horaF, minutoF, segundoF;
	int tempoTotalC, tempoTotalF, segundosT, dias, horas, minutos, segundos, mexeu = 0;

	printf("Dia ");
	scanf("%d", &diaI);
	scanf("%d : %d : %d", &horaI, &minutoI, &segundoI);
	printf("Dia ");
	scanf("%d", &diaF);
	scanf("%d : %d : %d", &horaF, &minutoF, &segundoF);

	tempoTotalC = diaI*86400;
	if(horaI>horaF){
		horaF = horaF + 24;
		mexeu = 1;
	}
	tempoTotalC += horaI*3600;
	if(minutoI>minutoF){
		minutoF = minutoF + 60;
	}
	tempoTotalC += minutoI*60;
	if(segundoI>segundoF){
		segundoF = segundoF + 30;
	}
	tempoTotalC += segundoI;

	tempoTotalF = diaF*86400;
	tempoTotalF += horaF*3600;
	tempoTotalF += minutoF*60;
	tempoTotalF += segundoF;

	segundosT = abs(tempoTotalC - tempoTotalF);

	dias = segundosT/86400;
	if(mexeu==1){
		segundosT = segundosT - (dias*86400);
		dias = dias - 1;
		printf("%d dia(s)\n", dias);
		horas = segundosT/3600;
		printf("%d hora(s)\n", horas);
		segundosT = segundosT - (horas*3600);
		minutos = segundosT/60;
		printf("%d minuto(s)\n", minutos);
		segundosT = segundosT - (minutos*60);
		dias = segundosT;
		printf("%d segundo(s)\n", segundos);
	}else{
		printf("%d dia(s)\n", dias);
		segundosT = segundosT - (dias*86400);
		horas = segundosT/3600;
		printf("%d hora(s)\n", horas);
		segundosT = segundosT - (horas*3600);
		minutos = segundosT/60;
		printf("%d minuto(s)\n", minutos);
		segundosT = segundosT - (minutos*60);
		dias = segundosT;
		printf("%d segundo(s)\n", segundos);
	}

}
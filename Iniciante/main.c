#include <stdio.h>
#include <stdlib.h>

int main(){
	int horaInicio, minutoInicio, horaFinal, minutoFinal, tempoInicio, tempoFinal, tempoTotal, horaTotal, minutoTotal;

	scanf("%d%d%d%d", &horaInicio, &minutoInicio, &horaFinal, &minutoFinal);

	if((horaInicio==horaFinal)&&(minutoInicio==minutoFinal)){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
	}else{
		if(horaInicio>horaFinal){
			horaInicio = horaInicio*3600;
			horaFinal = (horaFinal + 24)*3600;
			minutoInicio = minutoInicio*60;
			minutoFinal = minutoFinal*60;

			tempoInicio = horaInicio + minutoInicio;
			tempoFinal = horaFinal + minutoFinal;

			tempoTotal = abs(tempoInicio - tempoFinal);

			horaTotal = tempoTotal/3600;
			tempoTotal = tempoTotal - (horaTotal*3600);
			minutoTotal = tempoTotal/60;

			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", horaTotal, minutoTotal);
		}else{
			horaInicio = horaInicio*3600;
			minutoInicio = minutoInicio*60;
			horaFinal = horaFinal*3600;
			minutoFinal = minutoFinal*60;

			tempoInicio = horaInicio + minutoInicio;
			tempoFinal = horaFinal + minutoFinal;

			tempoTotal = abs(tempoInicio - tempoFinal);

			horaTotal = tempoTotal/3600;
			tempoTotal = tempoTotal - (horaTotal*3600);
			minutoTotal = tempoTotal/60;

			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", horaTotal, minutoTotal);
		}
	}
}
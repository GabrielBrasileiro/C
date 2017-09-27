#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int segundosTotais, horas, minutos, segundos;
	
	printf("Digite um numero em segundos: \n");
	scanf("%d", &segundosTotais);

	segundos = segundosTotais % 60;
	minutos = (segundosTotais / 60) % 60;
	horas = ((segundosTotais / 60) / 60) % 60;
	
	printf("Horas: %d ", horas);
	printf("Minutos: %d ", minutos);
	printf("Segundos: %d ", segundos);
	
	return 0;
}

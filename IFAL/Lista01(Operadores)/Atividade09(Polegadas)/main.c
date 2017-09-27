#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float polegada, mm;
	
	printf("Digite a quantidade de polegadas de chuva: ");
	scanf("%f", &polegada);
	
	mm = polegada * 25.4;
	
	printf("O total de milímetros de chuva é: %.2f", mm);
	
	return 0;
}

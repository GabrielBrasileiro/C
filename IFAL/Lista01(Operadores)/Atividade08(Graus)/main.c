#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float c, f;
	
	printf("Escreva o valor em graus Cº: ");
	scanf("%f", &c);
	
	f = (c * 1.8) + 32;
	
	printf("O valor em fahrenheit é: %.2f", f);
	
	return 0;
}

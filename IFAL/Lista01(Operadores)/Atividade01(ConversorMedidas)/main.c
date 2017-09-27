#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float dc, mm, cm, m;
	
	printf("Digite o valor em metros: \n");
	scanf("%f", &m);
	
	dc = m * 10;
	
	mm = m * 1000;
	
	cm = m * 100;
	
	printf("O valor em decimetros é: %f\n", dc);
	printf("O valor em centimetros é: %f\n", cm);
	printf("O valor em milimetros é: %f\n", mm);
	
	system("pause");
	
	return 0;
}

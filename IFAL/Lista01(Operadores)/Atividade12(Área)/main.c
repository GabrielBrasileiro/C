#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	float area, altura, largura;
	
	printf("Digite a altura do retangulo em metros: \n");
	scanf("%f", &altura);
	
	printf("Digite a largura do retangulo em metros: \n");
	scanf("%f", &largura);
	
	area = altura * largura;
	
	printf("A área do retangulo é: %.2f", area);
	
	return 0;
}

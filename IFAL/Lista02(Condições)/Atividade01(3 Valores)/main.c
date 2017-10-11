#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float a, b, c;
	
	printf("Digite o valor do primeiro lado: ");
	scanf("%f", &a);
	
	printf("Digite o valor do segundo lado: ");
	scanf("%f", &b);
	
	printf("Digite o valor do terceiro lado: ");
	scanf("%f", &c);
	
	if((((b - c) < a) < (b + c)) && (((a - c) < b ) < (a + c)) && (((a - b) < c) < (a + b))){
		
		printf("Esse objeto é um triangulo válido\n");
		
	} else{
		
		printf("Esse objeto não é um triangulo\n");
		
	}
	
	system("pause");
	
	return 0;
}

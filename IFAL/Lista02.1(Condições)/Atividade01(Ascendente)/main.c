#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float a, b, c;
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &a);
	
	printf("Digite o primeiro segundo: \n");
	scanf("%f", &b);
	
	printf("Digite o primeiro terceiro: \n");
	scanf("%f", &c);
	
	if((a > b) && (b > c)){
		
		printf("O valor crescente é: %f < %f < %f \n", c, b, a);
		
	} else if((a > c) && (c > b)){
		
		printf("O valor crescente é: %f < %f < %f \n", b, c, a);
		
	} else if((b > a) && (a > c)){
		
		printf("O valor crescente é: %f < %f < %f \n", c, a, b);
		
	} else if((b > c) && (c > a)){
		
		printf("O valor crescente é: %f < %f < %f \n", a, c, b);
		
	} else if((c > a) && (a > b)){
		
		printf("O valor crescente é: %f < %f < %f \n", b, a, c);
		
	} else if((c > b) && (b > a)){
		
		printf("O valor crescente é: %f < %f < %f \n", a, b, c);
		
	} else{
		
		printf("Existem número iguais");
		
	}
	
	
	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	float a, b, c;
	
	printf("Digite o valor 01: \n");
	scanf("%f", &a);
	
	printf("Digite o valor 02: \n");
	scanf("%f", &b);
	
	printf("Digite o valor 03: \n");
	scanf("%f", &c);				
	
	if(a > b && b > c){
		
		printf("A ordem � %.2f > %.2f > %.2f\n", a, b, c);
		printf("Condi��o 1\n");
		
	} else if(a > c && c > b){
		
		printf("A ordem � %.2f > %.2f > %.2f\n", a, c, b);
		printf("Condi��o 2\n");
		
	} else if(b > a && a > c){
		
		printf("A ordem � %.2f > %.2f > %.2f\n", b, a, c);
		printf("Condi��o 3\n");
		
	} else if(b > c && c > a){
		
		printf("A ordem � %.2f > %.2f > %.2f\n", b, c, a);
		printf("Condi��o 4\n");
		
	} else if(c > b && b > a){
		
		printf("A ordem � %.2f > %.2f > %.2f\n", c, b, a);
		printf("Condi��o 5\n");
		
	} else if(c > a && a > b) {
		
		printf("A ordem � %.2f > %.2f > %.2f\n", c, a, b);
		printf("Condi��o 6\n");
		
	} else{
		
		printf("Existem valores iguais\n");
		
	}
	
	system("pause");
	
	return 0;
}

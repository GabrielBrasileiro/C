#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float n1, n2;
	
	printf("DIgite um número inteiro: \n");
	scanf("%f", &n1);
	
	printf("DIgite um número inteiro: \n");
	scanf("%f", &n2);
	
	if(n1 > n2){
		
		n1 = n1 * n1;
		n2 = sqrt(n2);
		
		printf("O número maior ao quadrado é: %.2f\n", n1);
		printf("A raiz do número menor é: %.2f", n2);
		
	} else{
		
		n2 = n2 * n2;
		n1 = sqrt(n1);
		
		printf("O número maior ao quadrado é: %.2f\n", n2);
		printf("A raiz do número menor é: %.2f", n1);
		
	}
	
	return 0;
}

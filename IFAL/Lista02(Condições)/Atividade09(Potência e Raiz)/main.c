#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float n1, n2;
	
	printf("DIgite um n�mero inteiro: \n");
	scanf("%f", &n1);
	
	printf("DIgite um n�mero inteiro: \n");
	scanf("%f", &n2);
	
	if(n1 > n2){
		
		n1 = n1 * n1;
		n2 = sqrt(n2);
		
		printf("O n�mero maior ao quadrado �: %.2f\n", n1);
		printf("A raiz do n�mero menor �: %.2f", n2);
		
	} else{
		
		n2 = n2 * n2;
		n1 = sqrt(n1);
		
		printf("O n�mero maior ao quadrado �: %.2f\n", n2);
		printf("A raiz do n�mero menor �: %.2f", n1);
		
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	 
	float div, mult, sub, n1, n2, total; 
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	total = n1 + n2;
	div = n1 / n2;
	mult = n1 * n2;
	sub = n1 - n2;
	
	if(n1 > n2){
		
		printf("O primeiro n�mero � maior que o segundo\n");
		
	} else{
		
		printf("O segundo n�mero � maior que o primeiro\n");
		
	}
	
	printf("A soma �: %.2f\n", total);
	printf("A divis�o �: %.2f\n", div);
	printf("A multiplica��o �: %.2f\n", mult);
	printf("A subtra��o �: %.2f\n", sub);
	
	system("pause");
	
	return 0;
}

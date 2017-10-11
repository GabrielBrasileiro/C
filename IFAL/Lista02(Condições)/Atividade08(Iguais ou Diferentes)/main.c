#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float n1, n2;
	
	printf("Digite o número 1: \n");
	scanf("%f", &n1);
	
	printf("Digite o número 2: \n");
	scanf("%f", &n2);
	
	if(n1 == n2){
		
		printf("Os números são iguais. \n");
		
	} else{
		
		printf("Os números são diferentes.\n");
		
	}
	
	return 0;
}

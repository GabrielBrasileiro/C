#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int n1;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &n1);
	
	if((n1 % 3) == 0){
		
		printf("O valor e múltiplo de 3");
		
	} else{
		
		printf("O valor nao e múltiplo de 3");
		
	}
	
	return 0;
}

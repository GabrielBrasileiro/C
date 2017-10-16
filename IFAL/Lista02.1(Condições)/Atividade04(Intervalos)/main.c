#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int a;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &a);
	
	if(a == 5){
		
		printf("O valor é igual a 5\n");
		
	} else if(a == 200){
		
		printf("O valor é igual a 200\n");
		
	} else if(a == 400){
		
		printf("O valor é igual a 400\n");
		
	} else if((a >= 500) && (a <= 1000)){
		
		printf("O valor está entre 500 e 1000");
		
	} else{
		
		printf("O valor não está entre os parâmetros");
		
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int n1;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &n1);
	
	if((((n1 % 10) == 0) && ((n1 % 5) == 0)) && ((n1 % 2) == 0)) {
		
		printf("O número é divisível por 10, 5 e 2");
		
	} else if(((n1 % 10) == 0) && ((n1 % 5) == 0)){
		
		printf("O número é divisível apenas por 10 e 5");
		
	} else if(((n1 % 10) == 0) && ((n1 % 2) == 0)){
		
		printf("O número é divisível apenas por 10 e 2");
		
	} else if(((n1 % 5) == 0) && ((n1 % 2) == 0)){
		
		printf("O número é divisível apenas por 5 e 2");
		
	} else if((n1 % 10) == 0){
		
		printf("O número é divisível apenas por 10");
		
	} else if((n1 % 5) == 0){
		
		printf("O número é divisível apenas por 5");
		
	} else if((n1 % 2) == 0){
		
		printf("O número é apenas divisível por 2");
		
	} else{
		
		printf("Não é divisível por 10, 5 e 2");
		
	}
	
	return 0;
}

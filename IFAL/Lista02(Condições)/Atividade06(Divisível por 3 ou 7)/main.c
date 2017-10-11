#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int n1, resto3, resto7;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &n1);
	
	if(((n1 % 3) == 0) && ((n1 % 7) == 0)){
		
		printf("Ele é divisível por 3 e 7");
		
	} else if((n1 % 3) == 0){
		
		printf("Ele é divisível por 3");
		
	} else if((n1 % 7) == 0){
		
		printf("Ele é divisível por 7");
		
	} else{
		
		printf("Não é divisivel nem por 3 nem por 7");
		
	}
	
	return 0;
}

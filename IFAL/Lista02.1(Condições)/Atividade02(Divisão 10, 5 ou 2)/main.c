#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int a;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &a);
	
	if(((a % 10) == 0) && ((a % 5) == 0) && ((a % 2)==0)){
		
		printf("O valor é divisível por 10, 5, 2");
		
	} else if(((a % 10) == 0) && ((a % 5) == 0)){
		
		printf("O valor só é divisível por 10 e 5");
		
	} else if(((a % 10) == 0) && ((a % 2) == 0)){
		
		// Se o valor for divisível por 10 sempre seá por 5
		// Essa é uma condição teste
		printf("O valor só é divisível por 10 e 2");
		
	} else if(((a % 5) == 0) && ((a % 2) == 0)){
		
		// Condição também irreal 
		printf("O valor só é divisível por 5 e 2");
		
	} else if((a % 10) == 0){
		
		// Condição também improvável
		printf("O valor só é divisível por 10");
		
	} else if((a % 5) == 0){
		
		printf("O valor só é divisível por 5");
		
	} else if((a % 2) == 0){
		
		printf("O valor só é divisível por 2");
		
	} else{
		
		printf("O valor não é divisível por nenhuma das condições numéricas 2, 5 e 10");
		
	}
		
	return 0;
}

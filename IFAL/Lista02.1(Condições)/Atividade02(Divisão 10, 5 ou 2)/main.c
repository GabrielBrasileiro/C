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
		
		printf("O valor � divis�vel por 10, 5, 2");
		
	} else if(((a % 10) == 0) && ((a % 5) == 0)){
		
		printf("O valor s� � divis�vel por 10 e 5");
		
	} else if(((a % 10) == 0) && ((a % 2) == 0)){
		
		// Se o valor for divis�vel por 10 sempre se� por 5
		// Essa � uma condi��o teste
		printf("O valor s� � divis�vel por 10 e 2");
		
	} else if(((a % 5) == 0) && ((a % 2) == 0)){
		
		// Condi��o tamb�m irreal 
		printf("O valor s� � divis�vel por 5 e 2");
		
	} else if((a % 10) == 0){
		
		// Condi��o tamb�m improv�vel
		printf("O valor s� � divis�vel por 10");
		
	} else if((a % 5) == 0){
		
		printf("O valor s� � divis�vel por 5");
		
	} else if((a % 2) == 0){
		
		printf("O valor s� � divis�vel por 2");
		
	} else{
		
		printf("O valor n�o � divis�vel por nenhuma das condi��es num�ricas 2, 5 e 10");
		
	}
		
	return 0;
}

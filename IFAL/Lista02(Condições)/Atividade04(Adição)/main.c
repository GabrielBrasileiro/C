#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float n1, n2, total;
	
	printf("Digite o número 01: \n");
	scanf("%f", &n1);
	
	printf("Digite o número 02: \n");
	scanf("%f", &n2);
	
	total = n1 + n2;
	
	if(total > 20){
		
		total = total + 8;
		
		printf("O valor final foi somado + 8 totalizando: %.1f\n", total); 
		
	} else{
		
		total = total - 5;
		
		printf("O valor final foi subtraido - 5 totalizando: %.1f\n", total);
		
	}
	
	return 0;
}

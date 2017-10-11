#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf("Digite o valor 01: \n");
	scanf("%d", &a);
	
	printf("Digite o valor 02: \n");
	scanf("%d", &b);
	
	printf("Digite o valor 03: \n");
	scanf("%d", &c);
	
	if(a > b && a > c){
		
		printf("O valor %d é o maior\n", a);
		
	} else if(b > a && b > c){
		
		printf("O valor %d é o maior\n", b);
		
	} else{
		
		printf("O valor %d é o maior\n", c);
		
	}
	
	return 0;
}

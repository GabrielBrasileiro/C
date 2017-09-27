#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, total;
	
	printf("DIgite o valor número 1: ");
	scanf("%d", &n1);
	
	printf("DIgite o valor número 2: ");
	scanf("%d", &n2);
	
	printf("DIgite o valor número 3: ");
	scanf("%d", &n3);
	
	printf("DIgite o valor número 4: ");
	scanf("%d", &n4);
	
	total = n1 + n2 + n3 + n4;
	
	printf("O total é: %d", total);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, media;
	
	printf("Digite a nota número 01: ");
	scanf("%f", &n1);
	
	printf("Digite a nota número 01: ");
	scanf("%f", &n2);
	
	printf("Digite a nota número 01: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
		
	printf("A média é: %.2f", media);	
		
	return 0;
}

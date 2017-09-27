#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, media;
	
	printf("Digite a nota número 01: \n");
	scanf("%f", &n1);
	
	printf("Digite a nota número 02: \n");
	scanf("%f", &n2);
	
	printf("Digite a nota número 03: \n");
	scanf("%f", &n3);
	
	n1 = n1 * 0.3;
	
	n2 = n2 * 0.3;
	
	n3 = n3 * 0.4;
	
	media = n1 + n2 + n3;
	
	printf("Media final: %.2f", media);
	
	return 0;
}

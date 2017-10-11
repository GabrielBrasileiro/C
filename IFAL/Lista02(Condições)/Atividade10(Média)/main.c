#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float n1, n2, n3, media;
	
	printf("Digite a nota número 01: \n");
	scanf("%f", &n1);
	
	printf("Digite a nota número 02: \n");
	scanf("%f", &n2);
	
	printf("Digite a nota número 03: \n");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	if(media >= 6){
		
		printf("O aluno foi aprovado.\n");
		
	} else{
		
		printf("O aluno foi reprovado.\n");
		
	}
	
	return 0;
}

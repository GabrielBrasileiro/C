#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int anoNasc, idade, anoAtual, idade2021;
	
	printf("Digite o ano do seu nascimento em 4 dígitos: \n");
	scanf("%d", &anoNasc);
	
	printf("Digite o ano atual: \n");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNasc;
	idade2021 = 2021 - anoNasc;
	
	printf("A sua idade é: %d\n", idade);
	printf("A sua idade em 2021 será: %d\n", idade2021);
	
	return 0;
}

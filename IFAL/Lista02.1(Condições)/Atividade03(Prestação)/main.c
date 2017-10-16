#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float salario, emprestimo, operacao, condicao;
	int meses;
	
	printf("Digite o valor do sal�rio: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor do emprestimo: \n");
	scanf("%f", &emprestimo);
	
	printf("N�mero de meses: \n");
	scanf("%d", &meses);
	
	operacao = salario * 0.3;
	condicao = emprestimo / meses;
	
	if(operacao < condicao){
		
		printf("A sua condi��o financeira atual n�o atende um empr�stimo desse porte. \n");
		printf("Meses: %d | Parcela: %.2f | Condi��o: %.2f \n", meses, condicao, operacao);
		printf("A opera��o permitida � at�: %.2f", operacao);
		
	} else{
		
		printf("A sua condi��o atende perfeitamente o empr�stimo\n");
		printf("Meses: %d | Parcela: %.2f | Condi��o: %.2f", meses, condicao, operacao);
		
	}
	
	return 0;
}

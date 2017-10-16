#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float salario, emprestimo, operacao, condicao;
	int meses;
	
	printf("Digite o valor do salário: \n");
	scanf("%f", &salario);
	
	printf("Digite o valor do emprestimo: \n");
	scanf("%f", &emprestimo);
	
	printf("Número de meses: \n");
	scanf("%d", &meses);
	
	operacao = salario * 0.3;
	condicao = emprestimo / meses;
	
	if(operacao < condicao){
		
		printf("A sua condição financeira atual não atende um empréstimo desse porte. \n");
		printf("Meses: %d | Parcela: %.2f | Condição: %.2f \n", meses, condicao, operacao);
		printf("A operação permitida é até: %.2f", operacao);
		
	} else{
		
		printf("A sua condição atende perfeitamente o empréstimo\n");
		printf("Meses: %d | Parcela: %.2f | Condição: %.2f", meses, condicao, operacao);
		
	}
	
	return 0;
}

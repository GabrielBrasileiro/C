#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	float salario = 500.00, comissao = 50.00, perc_carro = 0.05, valorTotalVendas, salarioFinal; 
	int num_carros;
	char nome[100];
	
	printf("Digite o nome do funcionário: \n");
	scanf("%s", &nome);
	
	printf("Digite o numero de carros vendidos: \n");
	scanf("%d", &num_carros);
	
	printf("Digite o valor total das vendas: \n");
	scanf("%f", &valorTotalVendas);
	
	salarioFinal = salario + (comissao * num_carros) + (valorTotalVendas * perc_carro);
	
	printf("O salário final do %s será de %.2f R$", nome, salarioFinal);
	
	return 0;
}

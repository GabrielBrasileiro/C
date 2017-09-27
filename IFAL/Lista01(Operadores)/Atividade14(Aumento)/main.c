#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, reajuste, novoSalario;
	
	printf("Digite o seu salário atual: ");
	scanf("%f", &salario);
	
	printf("Digite o percentual de reajuste em %: ");
	scanf("%f", &reajuste);
	
	reajuste = reajuste / 100;
	
	novoSalario = salario + (salario * reajuste);
	
	printf("O salario reajustado é: %.2f", novoSalario);
	
	return 0;
}

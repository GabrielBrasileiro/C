#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco, imp = 0.45, dist = 0.28, total;
	
	printf("Digite o valor de fábrica do carro: \n");
	scanf("%f", &preco);
	
	total = preco + (preco * (imp + dist));
	
	printf("O valor fina do carro será: R$ %.2f", total);
	
	return 0;
}

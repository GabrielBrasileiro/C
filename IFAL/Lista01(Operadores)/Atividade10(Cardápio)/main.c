#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	float valorFinal, hamb, cheese, fritas, refri;
	
	printf("Cardápio");
	printf("Hamburguer......R$ 3,00\n");
	printf("Cheeseburguer...R$ 2,50\n");
	printf("Fritas..........R$ 2,50\n");
	printf("Refrigerante....R$ 1,00\n\n");
	
	system("pause");
	
	printf("\nDigite a quantidade de Hamburguers que você comeu: \n");
	scanf("%f", &hamb);
	
	printf("Digite a quantidade de Cheeseburgueres que você comeu: \n");
	scanf("%f", &cheese);
	
	printf("Digite a quantidade de Fritas(Porção) que você comeu: \n");
	scanf("%f", &fritas);
	
	printf("Digite a quantidade de Hamburguers que você comeu: \n");
	scanf("%f", &refri);
	
	hamb = hamb * 3.00;
	cheese = cheese * 2.50;
	fritas = fritas * 2.50;
	refri = refri * 1.00;
	
	valorFinal = hamb + cheese + fritas + refri;
	
	printf("O valor final da sua conta é %.2f: ", valorFinal);
	
	system("pause");
	
	return 0;
}

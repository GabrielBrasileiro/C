#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	float brancos, nulos, validos, total;
	float porceBra, porceNul, porceVal;
	
	printf("Digite o n�mero de votos v�lidos\n");
	scanf("%f", &validos);
	
	printf("Digite o n�mero de votos brancos\n");
	scanf("%f", &brancos);
	
	printf("Digite o n�mero de votos nulos\n");
	scanf("%f", &nulos);
	
	total = brancos + nulos + validos;
	
	porceVal = (100 * (validos)) / total;
	porceBra = (100 * (brancos)) / total;
	porceNul = (100 * (nulos)) / total;
	
	printf("\nA porcentagem de v�lidos �: %.2f\n", porceVal);
	printf("A porcentagem de brancos �: %.2f\n", porceBra);
	printf("A porcentagem de nulos �: %.2f\n", porceNul);
	
	return 0;
}

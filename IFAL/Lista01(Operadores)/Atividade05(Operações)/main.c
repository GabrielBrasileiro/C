#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float quad, cubo, raizquad, raizcub, n;
	
	do{
	
		printf("Digite um valor positivo: \n");
		scanf("%f", &n);
	
		if(n < 0){
	
			printf("O valor é menor que zero\n");
	
		} else{
		
			quad = n * n;
			cubo =  n * n * n;
			raizquad = n / n;
			raizcub = n / n / n;
	
			printf("O valor ao quadrado é: %f\n", quad);
			printf("O valor ao cubo é: %f\n", cubo);
			printf("A raiz quadrada é: %f\n", raizquad);
			printf("A raiz cúbica é: %f\n", raizcub);
			
			system("pause");
	
		}
	
	} while(n < 0);
	
	return 0;
}

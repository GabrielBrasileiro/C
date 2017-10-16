#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int a;
	
	printf("Digite os últimos 2 dígitos da placa do veículo\n");
	scanf("%d", &a);
	
	if(a == 1){
		
		printf("Deve ser renovado no mês de Janeiro\n");
		
	} else if(a == 2){
		
		printf("Deve ser renovado no mês de Fevereiro\n");
		
	} else if(a == 3){
		
		printf("Deve ser renovado no mês de Março\n");
		
	} else if(a == 4){
		
		printf("Deve ser renovado no mês de Abril\n");
		
	} else if(a == 5){
		
		printf("Deve ser renovado no mês de Maio\n");
		
	} else if(a == 6){
		
		printf("Deve ser renovado no mês de Junho\n");
		
	} else if(a == 7){
		
		printf("Deve ser renovado no mês de Julho\n");
		
	} else if(a == 8){
		
		printf("Deve ser renovado no mês de Agosto\n");
		
	} else if(a == 9){
		
		printf("Deve ser renovado no mês de Setembro\n");
		
	} else if(a == 10){
		
		printf("Deve ser renovado no mês de Outubro\n");
		
	} else if(a == 11){
		
		printf("Deve ser renovado no mês de Novembro\n");
		
	} else{
		
		printf("Deve ser revado no mês de Dezembro\n");
		
	}
	
	return 0;
}

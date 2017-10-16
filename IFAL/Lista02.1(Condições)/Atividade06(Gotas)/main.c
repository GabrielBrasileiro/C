#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	float peso, mg, ml, gotas;
	
	printf("Informe a idade do paciente: ");
	scanf("%d", &idade);
	
	printf("Infrome o peso do paciente: ");
	scanf("%f", &peso);
	
	if(idade <= 12){
		
		
		if((peso >= 5) && (peso <= 9)){
			
			mg = 125;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é: %.2f", gotas);
			
		} else if((peso >= 9.1) && (peso <= 16)){
			
			mg = 250;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é: %.2f", gotas);
			
		} else if((peso >= 16.1) && (peso <= 24)){
			
			mg = 375;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é: %.2f", gotas);
			
		} else if((peso >= 24.1) && (peso <= 30)){
			
			mg = 500;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é: %.2f", gotas);
			
		} else{
			
			mg = 750;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é: %.2f", gotas);
			
		}
		
	} else{
		
		if(peso < 60){
			
			mg = 875;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é: %.2f", gotas);
			
		} else{
			
			mg = 1000;
			ml = (mg * 1 / 500);
			gotas = ml * 20;
			
			printf("O número de gotas é %.2f", gotas);
			
		}
		
	}
	
	return 0;
}

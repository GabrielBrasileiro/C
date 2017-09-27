#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	char nome[20];
	int idade;
	float altura, peso, imc;
	char sexo;
	
	printf("Qual o seu nome: \n");
	scanf("%s", &nome);
	
	printf("Qual a sua idade: \n");
	scanf("%d", &idade);
	
	printf("Qual o seu sexo(M ou F): \n");
	scanf("%s", &sexo);
	
	printf("Qual a sua altura: \n");
	scanf("%f", &altura);
	
	printf("Qual o seu peso: \n");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	printf("Seu IMC é: %f\n", imc);
	
	system("pause");
	
	return 0;
}

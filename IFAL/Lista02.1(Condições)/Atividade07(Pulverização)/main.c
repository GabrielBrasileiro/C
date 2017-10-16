#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	char nome[50];
	int entrada;
	float valor, ectares, preco, desconto, descontoDesc;
	
	printf("Tipo 1: pulverização contra ervas daninhas, R$ 5,00 por acre \n");
	printf("Tipo 2: pulverização contra gafanhotos, R$ 10,00 por acre \n");
	printf("Tipo 3: pulverização contra broca, R$ 15,00 por acre \n");
	printf("Tipo 4: pulverização contra tudo acima, R$ 25,00 por acre \n");
	printf("Selecione a opção: \n");
	scanf("%d", &entrada);
	
	printf("Digite o valor da área antes de ir ao valor final \n");
	scanf("%f", &ectares);
	
	printf("Digite o nome do fazendeiro: \n");
	scanf("%s", &nome);
	
	switch (entrada){
		
		case 1:
			
			valor = 5.00;
			
			preco = valor * ectares;
			
			if((ectares > 300) && (preco > 1750)){
				
				descontoDesc = preco * 0.15;
				desconto = preco - (preco * 0.15);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
								
			} else if(ectares > 300){
				
				descontoDesc = preco * 0.05;
				desconto = preco - (preco * 0.05);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else if(preco > 1750){
				
				descontoDesc = preco * 0.10;
				desconto = preco - (preco * 0.10);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else{
				
				descontoDesc = preco * 0.00;
				desconto = preco - (preco * 0.00);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			}
		
		break;
		
		case 2:
		
			valor = 10.00;
			
			preco = valor * ectares;
			
			if((ectares > 300) && (preco > 1750)){
				
				descontoDesc = preco * 0.15;
				desconto = preco - (preco * 0.15);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
								
			} else if(ectares > 300){
				
				descontoDesc = preco * 0.05;
				desconto = preco - (preco * 0.05);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else if(preco > 1750){
				
				descontoDesc = preco * 0.10;
				desconto = preco - (preco * 0.10);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else{
				
				descontoDesc = preco * 0.00;
				desconto = preco - (preco * 0.00);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2\nf", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			}
		
		break;
		
		case 3:
		
			valor = 15.00;
			
			preco = valor * ectares;
			
			if((ectares > 300) && (preco > 1750)){
				
				descontoDesc = preco * 0.15;
				desconto = preco - (preco * 0.15);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
								
			} else if(ectares > 300){
				
				descontoDesc = preco * 0.05;
				desconto = preco - (preco * 0.05);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else if(preco > 1750){
				
				descontoDesc = preco * 0.10;
				desconto = preco - (preco * 0.10);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else{
				
				descontoDesc = preco * 0.00;
				desconto = preco - (preco * 0.00);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			}
		
		break;
		
		case 4:
		
			valor = 25.00;
			
			preco = valor * ectares;
			
			if((ectares > 300) && (preco > 1750)){
				
				descontoDesc = preco * 0.15;
				desconto = preco - (preco * 0.15);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
								
			} else if(ectares > 300){
				
				descontoDesc = preco * 0.05;
				desconto = preco - (preco * 0.05);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else if(preco > 1750){
				
				descontoDesc = preco * 0.10;
				desconto = preco - (preco * 0.10);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			} else{
				
				descontoDesc = preco * 0.00;
				desconto = preco - (preco * 0.00);
				
				printf("Comprador: %s\n", nome);
				printf("Tipo de pulverização: %d\n", entrada);
				printf("O valor do desconto é: %.2f\n", descontoDesc);
				printf("Valor sem desconto: %.2f\n", preco);
				printf("Valor total a pagar: %.2f\n", desconto);
				
			}	
		
		break;
		
	}
	
	return 0;
}

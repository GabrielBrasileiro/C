#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int entrada, sair, selecaoNotas, contador2 = 10, contador5 = 10, contador10 = 10, contador20 = 10, contador50 = 10, contador100 = 10;
	//Auxiliares
	int contador2Aux, contador5Aux, contador10Aux, contador20Aux, contador50Aux, contador100Aux;
	int cont2 = 0, cont5 = 0, cont10 = 0, cont20 = 0, cont50 = 0, cont100 = 0;
	
	float valor, preco, troco, recebido;
	
	do{
	
		printf("1 – Ler Valores vf e vt (vf=Fornecido e vt=Total da Conta), ambos inteiros\n");
		printf("2 – Obter troco\n");
		printf("3 – Mostrar cédulas de troco disponíveis\n");
		printf("4 - Cadastrar cédulas de troco\n");
		printf("Selecione a opção: \n");
		scanf("%d", &entrada);
	
		switch (entrada){
		
			case 1:
			
			valor = 0;
			
			printf("Digite o valor total do pagamento: \n");
			scanf("%f", &valor);	
				
			break;
		
			case 2:
			
			troco = 0;	
				
			printf("Digite o valor recebido: \n");
			scanf("%f", &recebido);
			
			troco = recebido - valor;
   			
   			printf("O valor troco será: %.2f\n", troco);
			
			
			    //Contador de cédulas de troco
				do {
			
					if ((troco > 99.99 ) && (contador100 > 0)){
          
		  				troco=(float)troco - 100;
          				cont100++;
          				contador100--;
          
        			} 
        
        			if ((troco > 49.99 && troco < 100)&& (contador50 > 0)){
              
			  			troco=(float) troco - 50;
     	         		cont50++;
     	         		contador50--;
        	     
    	       		}
            
        			if ((troco > 19.99 && troco < 50) && (contador20 > 0)){
        			
           				troco=(float)troco - 20;
           				cont20++;
           				contador20--;
          
           			}
            
	        		if ((troco > 9.99 && troco < 20) && (contador10 > 0)){
            
						troco=(float)troco - 10;
    	       			cont10++;
            			contador10--;
            
            		}
             
        			if ((troco > 4.99 && troco< 10) && (contador5 > 0)){
              
			  			troco=(float)troco - 5;
              			cont5++;
              			contador5--;
              
             		} 
			 
			 		if ((troco > 1.99 && troco < 5) && (contador2 > 0)){
			 		
              			troco=(float)troco - 2;
              			cont2++;
              			contador2--;
              
             		}
             
      			} while(troco > 0.00);
			
      			if (cont2 > 0) {printf("\n\n%i Notas(s) de 2 Reais\n", cont2);}
				if (cont5 > 0) {printf("%i Notas(s) de 5 Reais\n", cont5);}
      			if (cont10 > 0) {printf("%i Notas(s) de 10 Reais\n", cont10);}
      			if (cont20 > 0) {printf("%i Notas(s) de 20 Reais\n", cont20);}
     			if (cont50 > 0) {printf("%i Notas(s) de 50 Reais\n", cont50);}
      			if (cont100 > 0) {printf("%i Notas(s) de 100 Reais\n", cont100);}
      			
      			cont2 = 0; cont5 = 0; cont10 = 0; cont20 = 0; cont50 = 0; cont100 = 0;

      			printf("\n");
				
			break;
			
			case 3:
				
				printf("Existem %d cedulas de 2 reais\n", contador2);
				printf("Existem %d cedulas de 5 reais\n", contador5);
				printf("Existem %d cedulas de 10 reais\n", contador10);
				printf("Existem %d cedulas de 20 reais\n", contador20);
				printf("Existem %d cedulas de 50 reais\n", contador50);
				printf("Existem %d cedulas de 100 reais\n", contador100);
			
			break;	
			
			case 4:
				
				printf("1 - Adicionar notas de 2\n");
				printf("2 - Adicionar notas de 5\n");
				printf("3 - Adicionar notas de 10\n");
				printf("4 - Adicionar notas de 20\n");
				printf("5 - Adicionar notas de 50\n");
				printf("6 - Adicionar notas de 100\n");
				printf("Que cédula você gostaria de adicionar? \n");
				scanf("%d", &selecaoNotas);
				
				switch (selecaoNotas){
					
					case 1:
						
						printf("Digite o número de nota de 2 que gostaria de adicionar no caixa\n");
						scanf("%d", &contador2Aux);
						
						contador2 = contador2 + contador2Aux;
					
					break;
						
					case 2:
						
						printf("Digite o número de nota de 5 que gostaria de adicionar no caixa\n");
						scanf("%d", &contador5Aux);
						
						contador5 = contador5 + contador5Aux;
					
					break;
					
					case 3:
						
						printf("Digite o número de nota de 10 que gostaria de adicionar no caixa\n");
						scanf("%d", &contador10Aux);
						
						contador10 = contador10 + contador10Aux;
					
					break;
					
					case 4:
						
						printf("Digite o número de nota de 20 que gostaria de adicionar no caixa\n");
						scanf("%d", &contador20Aux);
						
						contador20 = contador20 + contador20Aux;
					
					break;
					
					case 5:
						
						printf("Digite o número de nota de 50 que gostaria de adicionar no caixa\n");
						scanf("%d", &contador50Aux);
						
						contador50 = contador50 + contador50Aux;
					
					break;
					
					case 6:
						
						printf("Digite o número de nota de 100 que gostaria de adicionar no caixa\n");
						scanf("%d", &contador100);
						
						contador100 = contador100 + contador100Aux;
					
					break;	
					
				}
				
			break;	
		
		}
		
		printf("Você desenja sair? 0 - Sair | 1 - Ficar\n");
		scanf("%d", &sair);
		system("cls");
		
	} while (sair != 0);
	
	return 0;
	
}

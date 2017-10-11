#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	int CodUser = 1234, PassUser = 9999, Cod, Pass, sair;
	
	do{
		
		do{
		
			printf("Digite o código de usuário: \n");
			scanf("%d", &Cod);
		
			if(CodUser == Cod){
			
				do{
				
					printf("Agora digite a senha: \n");
					scanf("%d", &Pass);
					
					if(PassUser ==  Pass){
						
						printf("Usuário logado com sucesso... \n");
						
					} else{
						
						printf("A senha está incorreta. \n");
						
					}
				
				} while(PassUser != Pass);
			
			} else{
				
				printf("O usuário esta incorreto. \n");
				
			}
		
		} while(CodUser != Cod);
		
		printf("Você gostaria de sair? 1 - Ficar / 0 - Sair \n");
		scanf("%d", &sair);
		
		if(sair == 1){
			
			printf("Status logado...\n");
			system("pause");
			return 0;
			
		}
		
	} while(sair != 0);
	
	printf("Programa finalizado com sucesso\n");
	system("pause");
	
	return 0;
}

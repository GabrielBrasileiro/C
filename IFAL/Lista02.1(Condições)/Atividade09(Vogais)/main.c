#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char entrada;
	
	printf("Digite uma letra e descubra se pé vogal ou não");
	printf("Digite uma letra minuscula: \n");
	scanf("%c", &entrada);
	
	switch (entrada){
		
		case 'a':	
			
			printf("Foi digitada a vogal: %c", entrada);
			
		break;
		
		case 'e':	
			
			printf("Foi digitada a vogal: %c", entrada);
			
		break;
		
		case 'i':	
			
			printf("Foi digitada a vogal: %c", entrada);
			
		break;
		
		case 'o':	
			
			printf("Foi digitada a vogal: %c", entrada);
			
		break;
		
		case 'u':
		
			printf("Foi digitada a vogal: %c", entrada);
		
		break;	
	
		default:
			
			printf("Voce digitou uma consoante: %c", entrada);
			
		break;	
		
	}

	getch();
	return 0;
}

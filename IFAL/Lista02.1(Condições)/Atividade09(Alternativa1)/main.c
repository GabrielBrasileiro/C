#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char  c;
    printf("Digite uma letra: ");
    scanf("%c", &c);

    switch (c){
      	
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':    
         
			printf("Vc digitou uma vogal.\n");
        
		break;
           
        default:  
          
		  printf("Vc digitou uma consoante\n");
      	 
      	 break;
      
	}
      
    getch();
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nc, contcar, conttotal, contcasas = 0, ntc, ntca;
	float taxa = 12.89, total;
	
	while(nc != 999){
		
		//printf("Digite o número de carros: \n");
		scanf("%d", &nc);
		
		if(nc > 2){
			
			contcar = nc - 2;
			conttotal = conttotal + contcar;
			
			contcasas++;
			
		}
		
	}
	
	ntc = conttotal - 997;
	total = ntc * taxa;
	ntca = contcasas - 1;
	
	printf("%.2f\n", total);
	printf("%d", ntca);
	
	return 0;
}

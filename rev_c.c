#include <stdio.h>

int main(){
	float n1, n2, som, sub, mult;
	char m, r;
	
	do{
		printf("Insira dois valores: ");
		scanf("%f %f",&n1, &n2);
	
		do{
			do{
				printf("Menu\n");
				printf("Escolha uma das opções: \n");
				scanf(" %c",&m);	
			}while(m != 'S' && m != 'D' && m != 'P' && m != 's' && m != 'd' && m != 'p');
	
			
			switch(m){
				case 'S': case 's':
					som = n1 + n2;
					printf("\nA soma dos dois numeros e %.2f", som);
				break;
				case 'D': case 'd':
					if(n1 > n2){
						sub = n1 - n2;
					}else{
						sub = n2 - n1;
					}
					printf("\nA subtraçao dos dois numeros e %.2f", sub);
	
				break;
				case 'P': case 'p':
					mult = n1 * n2;
					printf("\nO produto dos dois numeros e %.2f", mult);
	
				break;
				
				default: 
					printf("\nOpçao invalida! Escolha novamente:");	
			}
			
			printf("\nDeseja continuar as operaçoes?(Digite 'S')");
			scanf(" %c", &r);
			
		}while(r == 'S');
		printf("Deseja inserir novos valores?(digite 'S')");
		scanf(" %c", &r);
		
	}while( r == 'S');
}

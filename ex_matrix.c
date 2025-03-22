#include <stdio.h>

 #define LIN 3
 #define COL 20
 
 int main(){
 	
 	char mat[LIN][COL];
 	int x, y;
 	

 	for(x=0;x<LIN;x++){
 		printf("Digite um nome: \n");
 		scanf(" %19[^\n]s", mat[x]);	
 		
	}
	
	printf("Strings\n");
	for(x=0;x<LIN;x++){
		printf("%s\n", mat[x]);
	}
	
	for(x=0;x<LIN;x++){
		for(y=0;y<strlen(mat[x]);y++){
	 		printf("%c", mat[x][y]);		
 		}
 			printf("\n");
	}

 	return 0;
 }

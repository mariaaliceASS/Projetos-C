#include <stdio.h>

float soma(int *px, float *py);

int main(){
	int x;
	float y, result;
	
	printf("Digite um valor inteiro para o c�lculo: ");
	scanf("%d", &x);
	printf("Digite um valor real para o c�lculo: ");
	scanf(" %f", &y);
	result = soma(&x,&y);	
	printf("Resultado da soma �: %.2f", result);
	return 0;
}

float soma(int *px, float *py){
	float soma;
	soma = *px + *py;
	return soma;
}

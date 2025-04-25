#include <stdio.h>

float soma(int *px, float *py);

int main(){
	int x;
	float y, result;
	
	printf("Digite um valor inteiro para o cálculo: ");
	scanf("%d", &x);
	printf("Digite um valor real para o cálculo: ");
	scanf(" %f", &y);
	result = soma(&x,&y);	
	printf("Resultado da soma é: %.2f", result);
	return 0;
}

float soma(int *px, float *py){
	float soma;
	soma = *px + *py;
	return soma;
}

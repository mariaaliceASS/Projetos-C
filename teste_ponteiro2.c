#include <stdio.h>

float s_m(int x, float y, float *pmulti);

int main(){
	int x;
	float y, result_s, result_m;
	
	printf("Digite um valor inteiro para o c�lculo: ");
	scanf("%d", &x);
	printf("Digite um valor real para o c�lculo: ");
	scanf(" %f", &y);
	result_s = s_m(x,y,&result_m); //manda o espa�o vazio para a fun��o 
	printf("Resultado da soma �: %.2f", result_s);
	printf("Resultado da multiplicacao: %f", result_m);
	return 0;
}

float s_m(int x, float y, float *pmulti){
	float soma;
	soma = x + y;
	*pmulti = x * y;//coloca o * para pegar o espa�o vazio do main e colocar a multiplica��o
	return soma;
}

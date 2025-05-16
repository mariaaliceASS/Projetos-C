#include <stdio.h>

struct data{
	int dia, ano;
	char mes[15];
};

int main(){
	struct data *pdata1, data1;
	pdata1 = &data1;
	printf(" Digite a data: ");
	scanf("%d",&pdata1->dia);
	print("\n%d",pdata1->dia);
	return 0;
}

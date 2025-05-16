#include <stdio.h>

struct data{
	int dia, ano;
	char mes[15];
};

int main(){
	struct data datas[3];
	int z;
	printf("Digite 3 datas: ");
	for(z=0;z<3;z++){
		printf("\nData %d ",z);
		scanf(" %d",&datas[z].dia);
		scanf("%d",&datas[z].mes);
		scanf("%d",&datas[z].ano);
	}
	for(z=0;z<3;z++){
		printf("\n%d de %s de %d",datas[z].dia, datas[z].mes, datas[z].ano);
	}
	return 0;
}

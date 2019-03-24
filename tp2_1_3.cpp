#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mt[15][13];
	int vec[15];
	int i,k;
	int aux=0;
	int contf=0;
	for(i=0;i<15;i++){
		aux=contf;
		for(k=0;k<13;k++){
			int c=100+rand()%(1000-100);
			if(c%2==0){
				contf++;
			}
			mt[i][k]=c;
			printf("%d   ",mt[i][k]);
		}
		contf= contf - aux;
		printf("Pares por fila:%d ", contf);
		vec[i]=contf;
		printf("Vector:%d",vec[i]);
		printf("\n");
	}
	return 0;
}

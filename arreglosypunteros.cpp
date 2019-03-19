#include <stdio.h>
#include <stdlib.h>

void main (){
	int buff[5]={1,3,5,7,9};
	int *p;
	p=buff;
	int i;
	printf("Forma Subindexada:\n");
	for(i=0;i<5;i++){
		printf("%d\n",buff[i]);
	}
	printf("Aritmetica de punteros:\n");
	for(i=0;i<5;i++){
		printf("%d\n",*(p+i));
	}
	printf("Punteros con arreglo\n");
	for(i=0;i<5;i++){
		printf("%d\n",p[i]);
	}
	printf("Direccion de memoria con aritmetica de punteros:\n");
	for(i=0;i<5;i++){
		printf("%p\n",(p++));
	}
	printf("Dimensiones:\n");
	printf("%d\n",sizeof(buff));
	printf("%d",sizeof(p));
}
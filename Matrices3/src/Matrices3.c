/*
 ============================================================================
 Name        : Matrices3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

int main(void) {
	int filas,cols,matriz[MAX][MAX];
	int num;

	puts("Devuelve numero si todos los elementos de la matriz son iguales a num");

	do{
		printf("Introduce el númro de filas (1-%d): ",MAX);
		fflush(stdout);
		scanf("%d",&filas);
	}while(filas<=0 || filas>MAX);

	do{
		printf("Introduce el número de columnas (1-%d): ",MAX);
		fflush(stdout);
		scanf("%d",&cols);
	}while(cols<=0 || cols>MAX);

	pedirMatriz(filas,cols,matriz);

	puts("Introduce un numero para comprobar: ");
	fflush(stdout);
	scanf("%d",&num);
	if(matrizIguales(filas,cols,matriz,num)==1){
		puts("Todos los numeros de la matriz son iguales");
	}else{
		puts("No todos los números de la matriz son iguales");
	}

	return EXIT_SUCCESS;
}

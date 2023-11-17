/*
 ============================================================================
 Name        : Matrices1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

#define MAX 30

int main(void) {
	int filas,cols, matriz[MAX][MAX],num;

	puts("Rellena una matriz con un número");

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

	printf("Introduce el numero para rellenar la matriz:");
	fflush(stdout);
	scanf("%d",&num);
	numIguales(filas,cols,matriz,num);

	puts("La matriz es:");
	mostrarMatriz(filas,cols,matriz);

	return EXIT_SUCCESS;
}

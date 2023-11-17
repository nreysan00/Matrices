/*
 ============================================================================
 Name        : ProgramaMatrices.c
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
	int filas,cols;
	int matriz[MAX][MAX];

	puts("Programa de ejemplo de matrices");

	do{
		printf("Introduce el número de filas (Entre 1 y %d): ",MAX);
		fflush(stdout);
		scanf("%d",&filas);
	}while(filas<=0 || filas>MAX);

	do{
		printf("Introduce el numero de columnas (Entre 1 y %d)",MAX);
		fflush(stdout);
		scanf("%d",&cols);
	}while(cols<=0 || cols>MAX );

	printf("Introduce la matriz");
	pedirMatriz(filas,cols,matriz);

	printf("La matriz es \n");
	mostrarMatriz(filas,cols,matriz);

	printf("El menor elemento del vector es %d",devuelveMenor(filas,cols,matriz));
	return EXIT_SUCCESS;
}

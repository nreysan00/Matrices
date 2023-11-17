/*
 ============================================================================
 Name        : Matrices2.c
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
	int filas,cols,matriz[MAX][MAX];

	puts("Si todos los elementos de la matriz son 0 devuelve un entero");

	do{
		printf("Introduce el número de filas (1-%d): ",MAX);
		fflush(stdout);
		scanf("%d",&filas);
	}while(filas<=0 || filas>MAX);

	do{
		printf("Introduce el número de columnas (1-%d): ",MAX);
		fflush(stdout);
		scanf("%d",&cols);
	}while(cols<=0 || cols>MAX);

	printf("Introduce la matriz");
	pedirMatriz(filas,cols,matriz);

	puts("La matriz es: ");
	mostrarMatriz(filas,cols,matriz);

	if(matrizNula(filas,cols,matriz)==0){
		puts("La matriz no es nula");
	}else{
		puts("La matriz es nula");
	}

	return EXIT_SUCCESS;
}

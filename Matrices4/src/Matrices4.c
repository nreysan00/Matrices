/*
 ============================================================================
 Name        : Matrices4.c
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

	puts("¿Es una matriz triangular superior?");

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

	if(trianSuperior(filas,cols,matriz)==1){
		puts("Es una matriz triangular superior");
	}else{
		puts("No es una matriz triangular superior");
	}

	return EXIT_SUCCESS;
}

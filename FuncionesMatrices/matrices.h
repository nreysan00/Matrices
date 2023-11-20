/*
 * matrices.h
 *
 *  Created on: 17 nov 2023
 *      Author: Usuario
 */

#ifndef MATRICES_H_
#define MATRICES_H_
#define MAX 30

	void pedirMatriz(int filas, int cols, int matriz[][MAX]);
	void mostrarMatriz(int filas, int cols, int matriz[][MAX]);
	int devuelveMenor(int filas, int cols, int matriz[][MAX]);
	void numIguales(int filas, int cols, int matriz[][MAX], int num);
	int matrizNula(int filas, int cols, int matriz[][MAX]);
	int matrizIguales(int filas, int cols, int matriz[][MAX], int num);
	int trianSuperior(int filas, int cols, int matriz[][MAX]);
#endif /* MATRICES_H_ */

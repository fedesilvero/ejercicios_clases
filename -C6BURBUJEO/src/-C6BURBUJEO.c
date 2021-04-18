/*
 ============================================================================
 Name        : -C6BURBUJEO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int swap (int* a, int* b);

int main(void) {
	setbuf(stdout, NULL);

	int a = 5;
	int b = 3;


	printf("\nEl valor de a es: %d", a);
	printf("\nEl valor de b es: %d", b);

	swap (&a, &b);

	printf("\nEl valor de a es: %d", a);
	printf("\nEl valor de b es: %d", b);


	return 0;
}


int swap (int* a, int* b){

	int aux;
		aux = *b;

		*b = *a;
		*a = aux;
		 return 0;
}

// Federico Silvero



/*
Disponemos de dos variables numéricas (a y b).
Realizar un algoritmo que permita el intercambio de valores de dichas variables.*/

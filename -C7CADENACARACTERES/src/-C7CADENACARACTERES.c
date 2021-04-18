/*
 ============================================================================
 Name        : -C7CADENACARACTERES.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	//char texto[] = "Nona mama";
	//printf("El texto: %s", texto);
	//strcpy (texto, "Yanina");

	setbuf(stdout, NULL);


	char nombre [30];
	char apellido [30];
	char nombreCompleto[30];
	char aux[30];
	char aux2[30];


	printf("\nIngrese su nombre: ");
	gets(nombre) ;

	strcpy(aux, nombre);
	strlwr (aux);
	aux[0] = toupper (aux [0]);


	printf("\nIngrese su apellido: ");
	gets(apellido);

	strcpy(aux2, apellido);
	strlwr (aux2);

	aux2[0] = toupper (aux [0]);



	strcat (nombreCompleto, aux);
	strcat (nombreCompleto, " ");
	printf("nombreCompleto es: %s", nombreCompleto);
	strcat (nombreCompleto, aux2);
	printf("nombreCompleto es: %s", nombreCompleto);



	//printf("\nSu nombre completo es: %s", nombreCompleto);


	//printf("\nSu nombre completo es: %s", nombreCompleto);

	//nombreCompleto = strcat (nombre, " ");
	//nombreCompleto = strcat (nombre, apellido);










	return EXIT_SUCCESS;
}



/*
sizeof = me devuelve el tamaño de la variable
strlen = me devuelve la cantidad de elementos del array

Ejercicio 7-1:

Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido).

Ninguna de las dos variables se puede modificar.Debemos lograr guardar en una tercer variable el apellido y el nombre
con el siguiente formato:
Por ejemplo: Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:Gomez, Juan Ignacio


*/



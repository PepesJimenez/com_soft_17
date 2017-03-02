/* Programa que lee una secuencia de numeros por la entrada hasta que lee un cero, y muestra el mayor y el menor de la secuencia*/

#include <stdio.h>

int main(){

	// printf("Mi primer programa en C\n");

    /* Dos numeros a la vez

	// Variables
	int actual1, actual2;
	int menor;
	int mayor;

	//equivalente: int actual, menor, mayor;

	// Solicitar el numero al usuario
	printf(“Introduzca un numero: \n”);
	scanf(“%d %d”, &actual1, &actual2);

	printf(“Los numeos leidos son %d y %d\n”, actual1, actual2);

    */

	/* Ahora con un solo numero */

	// Variables
	int actual;
	int menor;
	int mayor;

	//equivalente: int actual, menor, mayor;

	// Solicitar el numero al usuario
	printf("Introduzca un numero: \n");
	scanf("%d", &actual);

	//printf("El numero leido es %d\n", actual);

	//ya tenemos el numero en la secuencia
	mayor = actual;
	menor = actual;

	//leemos hasta que introduce un cero
	while (actual != 0) {

	   if (actual < menor) {
	       menor = actual;
	   }

	   if (actual > mayor) {
	       mayor = actual;
	   }

        printf("Introduce otro numero: \n");
        scanf("%d", &actual);
    }

    if ((menor == 0) && (mayor == 0)) {

        printf("La sucesion esta vacia \n");
    
    } else { 
    
        printf("El menor numero leido es %d y el mayor numero leido  es %d\n", menor, mayor);
    
    }

    /*
    // NO SE SI ESTA BIEN
    printf(“Los numeros son %d y %d”, actual, actual2);

    */

    return 0;

}
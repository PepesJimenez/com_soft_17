// Ejercicio obligatorio para martes 28/2


#include <stdio.h>

#define MAXLINE 256

//Funcion que elimina el '\n' del final de una cadena y devuelve su longitud
int trimming(char cad[MAXLINE]);

int main (){

	//Variables
	char cad[MAXLINE];
	int longitud = 0;
	
	printf("Introduce una cadena: ");
	//scanf("%s!, cad);
	fgets(cad, MAXLINE, stdin);

	//Calculamos la longitud
	while (cad[longitud] != '\0') {
		longitud ++;
	}

	//trimming
	if ((longitud > 0) && cad[longitud - 1] == '\n') {
		
		cad[longitud - 1] = '\0';
		longitud --;

	printf("La longitud de \"%s\" es %d\n", cad, longitud);

	return 0;
	}
}

//Funcion que elimina el '\n' del final de una cadena y devuelve su longitud
int trimming(char cad[MAXLINE]) {

	int longitud = 0;

	//calculamos la longitud
	while (cad[longitud] != '\0') {
		longitud ++;
	}

	return longitud;
}
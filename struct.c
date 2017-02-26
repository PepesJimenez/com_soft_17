struct.c


#include <stdio.h>


struct Permisos {
	int lectura;
	int escritura;
	int ejecucion;
}

typedef struct P {
	int lectura;
	int escritura;
	int ejecucion;
} P;


int main () {

	struct Permisos p1;
	P p2;
	p2.lectura = 1;


	p1.lectura = 0;
	p1.escritura = 0;
	p1.ejecucion = 0;

	printf("Permisos: %d %d %d\n"

 
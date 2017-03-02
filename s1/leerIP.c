/*

Escribir un programa que pida al usuario 4 números 
enteros y compruebe si se podría construir 
una dirección IP válida con ellos. 
Para que esto ocurra, cada número entero debe 
ser mayor o igual que 0 y menor o igual que 255.

*/

#include <stdio.h>
#include <stdbool.h>	//Libreria necesaria para booleanos

#define TAM 4
#define MIN 0
#define MAX 255



int main (){

	int ip[TAM];

	//Pedimos los numeros
	printf("Introduce cuatro números enteros para construir una dirección IP: \n");
	scanf("%d, %d, %d, %d", &ip[0], &ip[1], &ip[2], &ip[3]);

	//Comprobamos numero a numero
	bool bien = true;
	int i = 0;

	if (ip[i] >= MIN && ip[i] <= MAX && i < TAM){

		//Numero correcto
		i ++;

	} else {

		//Direccion IP incorrecta
		bien = false;
		printf("Direccion IP incorrecta: %d no es un valor entre %d y %d\n", ip[i], MIN, MAX);
	}


	//Direccion IP correcta
	if (bien == true){

		printf("Dirección IP correcta: %d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
	}


	return 0;

}





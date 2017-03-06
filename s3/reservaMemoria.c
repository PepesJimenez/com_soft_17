/*
* Programa que solicita un nº de enteros y reserva
* memoria dinamica para ellos con un array
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 256



int main() {
    
    //variables
    int MAX_TAM = 0;
    char input[MAXLINE];
    
    //solicitamos el tamaño del array
    printf("Introduce el tamaño del array: ");
    fgets(input, MAXLINE, stdin);
    sscanf(input, "%d", &MAX_TAM);
    
    //reservamos memoria
    int *vector = (int *) malloc(MAX_TAM * sizeof(int));
    
    //mostramos el contenido por pantalla
    printf(" vetor = [");
    for (int i = 0; i < MAX_TAM; i++){
        
        printf("%d, ", vector[i]);
    }
    if (MAX_TAM > 0) {
        
        printf("%d", vector[MAX_TAM - 1]);
    }
    printf("]");
    
    //liberamos memoria
    free();
    
    /* HASTA AQUI LA ENTREGA OBLIGATORIA */
    
    return 0;
}

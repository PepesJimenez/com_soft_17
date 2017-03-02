#include <stdio.h>

#define TAM 10

/* Programa que busca si un valor introducido por el usuario esta en un array*/
int main() {

    //Variables
    //array
    int a[TAM]; // = {0,1,2,3,4,5,6,7,8,9};

    //Valor a buscar 
    int input;

    //Inicializar el  array
    for (int i= 0; i < TAM; i++){
        a[i] = i;
    }

    //Leemos el numero a buscar
    printf("Introduce el numero a buscar: \n");
    scanf("%d", &input);

    //Buscamos el numero
    int j = 0;
    while (a[j] != input && j<= TAM){ // GUARDA SOBRE EL TAMAÑO DEL ARRAY
        
        j++;
    }

    if(j < TAM){
        
        printf("El numero %d esta en la posicion %d\n", input, j);
    
    } else {
    
        printf("El numero %d no esta en el array", input);

    }


    return 0;

}
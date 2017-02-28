/* 
* Programa que solicita un numero de ficheros a procesar su informacion y muestra lo
* que ocupa la estructura de datos en memoria
*/


/*
* Dado el siguiente código:
* #define MAXLINE 256
* 
* struct InfoFichero {
*         char nombre[MAXLINE];
*         char flag;
*         int lectura;
*         int escritura;
*         int ejecucion;
* };
* 
* realice un programa en C que solicite al usuario el número de ficheros que quiere 
* procesar y, para cada uno de ellos, solicite su nombre (cadena de texto sin 
* separadores extra), el flag, y los permisos de lectura, escritura y ejecución, 
* y a partir de esa información, muestre la cantidad de memoria que ocupa y la 
* cantidad de memoria que realmente necesitaría.
*/


#include <stdio.h>

#define MAXLINE 256


//typedef char Cadena[MAXLINE];
//typedef Cadena *prtCadena;

struct InfoFichero {
        char nombre[MAXLINE];
        char flag;
        int lectura;
        int escritura;
        int ejecucion;
};


//elimina todos los espacios y tabuladores antes del primer caracter "valido" de un string
void trimming(char aux[MAXLINE]);


int main() {

    //variables
    int size = 0;
    char input[MAXLINE];
    int numero = 0;
        
    //1.- Solicitamos el numero de ficheros a procesar
    printf("Introduza el numero de ficheros a procesar: ");
    //FORMA SEGURA DE PEDIR LAS COSAS EN EL EXAMEN:
    //  fgets lee el numero introducido por la consola y lo mete en "input"
    //  sscanf lee "input" y lo mete formateado en "size"
    fgets(input, MAXLINE, stdin);
    sscanf(input, "%d", &size); 
        
    //2.- Creamos la estructura de memoria
    struct InfoFichero ficheros[size];
        
    //3.- Obtenemos los datos de cada fichero
    for (int i = 0; i < size; i++){
                
        //leemos el nombre del fichero
        printf("Introduce el nombre del fichero: ");
        fgets(ficheros[i].nombre, MAXLINE, stdin);           
        //hacer trimming
        trimming(ficheros[i].nombre);

        //leemos el char
        printf("Introduce el valor del flag (0/1): ");
        scanf(input, "%c", &ficheros[i].flag);
        //fgets(input, MAXLINE, stdin);
        //sscanf(input, "%c", &ficheros[i].flag);

        //leer el resto de parametros (CASA)
        //leemos lectura
        printf("Introduce el permiso de lectura: ");
        scanf(input, "%c", &ficheros[i].lectura);
        //fgets(numero, 1, stdin);
        //sscanf(numero, "%d", &ficheros[i].lectura);

        //leemos escritura
        printf("Introduce el permiso de escritura: ");
        scanf(input, "%c", &ficheros[i].escritura);
        //fgets(numero, 1, stdin);
        //sscanf(numero, "%d", &fichero[i].escritura);

        //leemos ejecucion
        printf("Introduce el permiso de ejecucion: ");
        scanf(input, "%c", &ficheros[i].ejecucion);
        //fgets(numero, 1, stdin);
        //sscanf(numero, "%d", &fichero[i].ejecucion);
    }
        
    //4.- Calculamos el tamaño real y minimo
    int longNombre = 0;
    int tamTotalReal = 0;
    int tamTotalMinimo = 0;
    for (int i = 0; i < size; i++) {
                
        //tamanyo real
        tamTotalReal += sizeof(ficheros[i]);
        //calculamos el tamaño minimo
        sscanf(ficheros[i].nombre, "%d", &longNombre);
        tamTotalMinimo += longNombre * sizeof(char);
        tamTotalMinimo += sizeof(char);
        tamTotalMinimo += 3 * sizeof(int);
    }
                
    printf("Tamanyo total ocupado en memoria: %d\n", tamTotalReal);
    printf("tamanyo que realmente necesita: %d\n", tamTotalMinimo);

        
    return 0;
}



//elimina todos los espacios y tabuladores antes del primer caracter "valido" de un string
void trimming(char aux[MAXLINE]){

    int i = 0;

    while (i < MAXLINE && (aux[i] != '\n' || aux[i] != '\t')){

        for (int j = i; j < MAXLINE; j++){

            aux[j] = aux[j + 1];
        }
    }
}

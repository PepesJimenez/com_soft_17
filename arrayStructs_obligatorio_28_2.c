/* 
* Programa que solicita un numero de ficheros a procesar su informacion y muestra lo
* que ocupa la estructura de datos en memoria
*/


#include <stdio.h>

#define MAXLINE 256

struct InfoFichero {
        char nombre[MAXLINE];
        char flag;
        int lectura;
        int escritura;
        int ejecucion;
}


int main() {

        //variables
        int size = 0;
        char input[MAXLINE];
        
        //1.- Solicitamos el numero de ficheros a procesar
        fgets(input, MAXLINE, stdin);
        sscanf(input."&d", &size); //Forma segura de pedir las cosas en el examen
        
        //2.- Creamos la estructura de memoria
        struct InfoFichero ficheros[size];
        
        //3.- Obtenemos los datos de cada fichero
        for (int = 0; i < size; i++){
                
                //leemos el nombre del fichero
                printf("Introduce el nombre del fichero: ");
                fgets(ficheros[i].nombre, MAXLINE, stdin);                
                //hacer trimming
                
                //leemos el char
                fgets(input, MAXLINE, stdin);
                sscanf(input, "%c", &ficheros[i].flag);

                //leer el resto de parametros (CASA)
                
        }
        
        //4.- Calculamos el tamaño real y minimo
        int tamTotalReal = 0;
        int tamTotalMinimo = 0;
        for (int i = 0; i < size; i++) {
                
                //tamanyo real
                tamTotalReal += sizeof(ficheros[i]);
                //calculamos el tamaño minimo
                tamTotalMinimo += trimming(ficheros[i].nombre * sizeof(char);
                tamTotalMinimo += sizeof(char);
                tamTotalMinimo += 3 * sizeof(int);
        }
                
        printf("Tamanyo total ocupado en memoria: %d\n", tamTotalReal);
        printf("tamanyo que realmente necesita: %d\n", tamTotalMinimo);

        
        return 0;
}
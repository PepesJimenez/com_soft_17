


#include <stdio.h>


int main () {

    int numbers[5];
    int *p;
    
    p = numbers;        //apunta a la primera direccion del array
    *p = 10;            //inicializa la pos. 0 del array a 10
    
    p++;                // avanzo a la siguient eposicion del array
    *p = 20;            // inicializa la pos. 2 a 20
    
    p = &numbers[2];    //cambio p por la posicion 2 del array
    *p = 30;            // inicializa la pos. 2 del array a 30
    
    p = numbers + 3;    //apunto a la posicion 3
    *p = 40;            // inicializa la pos. 3 del array a 40
 
    p = numbers;
    *(p + 4) = 50;      // inicializa la pos. 4 del arrray a 54
    
    
    printf ("Array inicializado = [");
    for (int i = 0; i < 4; i++) {
        
        printf("%d, ", numbers[i]);
    }
    printf("%d]\n", numbers[4]); 
 
    
    return 0;
}
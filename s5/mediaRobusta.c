/*
* ENTREGA OBLIGATORIA S5
*
* FALTA POR TERMINAR EL ULTIMO PRINTF()
*
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


double procesarArgumento(char *arg);



int main (int argc, char * argv[]) {
    
   if (argc < 2) {
   
        printf("Uso: %s <arg1>\n", argv[0]);
        return 0;
    } 
    
    double suma = 0.0;
    for (int i = 1; i < argc; i++) {
      
      suma += procesarArgumento(argv[i]);
    }
    
    double media = suma / (argc - 1);
    printf("La media es %lf\n", media);
   
    
    return 0;
}




double procesarArgumento(char *arg) {
    
    double conversion;
    char * error;
    
    conversion = stdtod(arg, &error);
    
    if (*error == 0) {    // '0' se puede poner como 'NULL'
    
        return conversion;
        
    } else {
    
        printf("No se puede convertir \"%s\" (hay una parte que no convertible \"%s\")\n", conversion, conversion);
        exit(1);    // MATA EL PROCESO
    }
    
}







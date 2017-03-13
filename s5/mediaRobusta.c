/*
* ENTREGA OBLIGATORIA S5
*
* FALTA POR TERMINAR EL ULTIMO PRINTF()
*
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* ***** CABECERAS ****** */

double procesarArgumento(char *arg);



/* ***** MAIN ***** */

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




/* ***** SUBALGORITMOS ***** */

double procesarArgumento(char *arg) {
    
    double conversion;
    char * error;
    
    conversion = strtod(arg, &error);
    
    if (*error == 0) {    // '0' se puede poner como 'NULL'
    
        return conversion;
        
    } else {

        char * str_error[];
        strncpy(str_error, arg[], while(arg[] != NULL));
        printf("No se puede convertir \"%s\" (hay una parte no convertible \"%s\")\n", conversion, conversion);
        exit(1);    // MATA EL PROCESO (1 = error en el proceso)
    }
    
}



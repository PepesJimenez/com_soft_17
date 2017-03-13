#include <stdio.h>
#include <string.h>



int main (int argc, char * argv[]) {
   
   if (argc < 2) {
        
        printf("Uso: %s\n", argv[0]);
        return 0;
    
    } else {

    	//Imprime nombre del ejecutable
		printf("Nombre del ejecutable: \"%s\"\n", argv[0]);

		//Imprime los argumentos
   		for (int i = 1; i < argc; i++) {
        
   	    	printf("Argumento %d: \"%s\" (longitud = %d)\n", i, argv[i], (int) strlen(argv[i]));
    	}
    }
	
    
    return 0;
}
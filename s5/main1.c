#include <stdio.h>
#include <string.h>



int main (int argc, char * argv[]) {
    
   if (argc < 2) {
        
        printf("Uso: %s <arg1>\n", argv[0]);
        return 0;
    } 
    
    for (int i = 1; i < argc; i++) {
        
        printf("Argc %d: %s (longitud = %d)\n", argv[i], strlen(argv[i]));
    }
    
    return 0;
}
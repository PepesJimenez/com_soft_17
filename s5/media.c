#include <stdio.h>
#include <string.h>



int main (int argc, char * argv[]) {
    
   if (argc < 2) {
        
        printf("Uso: %s <arg1>\n", argv[0]);
        return 0;
    } 
    
    double suma = 0.0;
    double conversion;
    for (int i = 1; i < argc; i++) {
      
      sscanf(argv[i], "%lf", &conversion);
      suma += argv[i];
    }
    
    double media = suma / (argc - 1);
    printf("La media es %lf\n", media);
   
    
    return 0;
}
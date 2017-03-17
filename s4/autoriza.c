/****** CODIGO A ENTREGAR EN S4 ******/


#include <stdio.h>
#include <string.h>

#define MAXLINE 256
#define MAXUSER 3

struct User {
    char * user;        // No reservamos memoria para esa cadena de caracteres
    char * pass;
};


int trimming (char *cad);


int main () {

    //1.- Solicita una cadena la usuario con el formato user@pass
    //2.- Separar usuario y contraseña
    //3.- Iteramos por la estructura para buscar si
    //    usuario y contraseña coincide con alguna de
    //    las presentes
    
 
    //variables
    struct User database[MAXUSER] = {
        {"Paco", "Luna"}, 
        {"Juan", "j12a"}, 
        {"Marisa", "98fhh12"}, 
    };
    
    //1.- Leemos la cadena de entrada
    printf("Introduce las credenciales con formato user@pass");
    char input[MAXLINE];
    fgets(input, MAXLINE, stdin);
    trimming(input);
    
    //2.- Separar usuario de contraseña
    /* 1. identificamos '@' con ptrArroba
     * 2. cambiamos '@' por '\0'
     * 3. ptrArroba ++;
     * 4. ya tenemos ptr input a inicio de cadena (usuario) y prtArroba a pass
    */
    char * punteroArroba = strstr(input, "@");
    int encontrado = 0;
    char *usuario = NULL;
    char password = NULL;

    if (punteroArroba == NULL) {
        
        printf("La cadena de entrada no está bien formada (no contiene el caracter '@')");

    } else {
        
        //machacamos '@' con '\0'
        *punteroArroba = '\0';
        
        //ya tenemos el usuario
        *usuario = input;
        
        //obtenemos la contraseña
        *password = punteroArroba + 1;
        
        //iteramos sobre database y comprobamos si el usuario y la contraseña coinciden
        int u = 0;
        while ((encontrado == 0) && (u < MAXUSER)) {     // GUARDA IMPORTANTE
        
            if ((strcmp(database[u].user, usuario) == 0) 
                && (strcmp(database[u].pass, password))) {
            
                encontrado = 1;
            }
            
            u ++;
        }
    }

        if (encontrado == 1){
                
            printf("El usuario %s no tiene credenciales en el sistema\n", &usuario);

         } else {
         
            printf("El usuario %s tiene credenciales en el sistema\n", &usuario);
         }  
    
    return 0;
}


int trimming (char *cad) {

    int longitud = 0;

    //calculamos la longitud
    while (cad(longitud) != '\0') {

        longitud ++;
    }

    //trimming
    if ((longitud > 0) && cad[longitud - 1] == '\n') {

        cad[longitud - 1] = '\0';
        longitud --;
    }

    return longitud;
}

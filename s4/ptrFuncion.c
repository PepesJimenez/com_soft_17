/************ NO HAY QUE SUBIRLO ************/



#include <stdio.h>


int inicializa() {

    return 0;
}

int suma (int a, int b) {
    
    return a + b;
}

int multiplica (int a, int b) {
    
    return a * b;
}



int main () {
    
    //int *p;
    
    //declaracion de puntero a funcion
    int (*pf1) ();
    int (*pf2) (int, int);
    
    //asignacion del puntero
    pf1 = inicializa;   //si ponemos punteros, lo entiende como que inicialize pf1 a 0
    pf2 = suma;
    
    //uso de punteros a funciones
    int n1 = pf1();
    int n2 = pf2(2, 5);
    pf2 = multiplica;
    int n3 = pf2(2, 5);
    
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);
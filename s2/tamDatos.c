#include <stdio.h>


struct X {
        short s;
        char c;
        int i;
};        
        
struct Y {
        int i;
        char c;
        short c;
};

struct Z {
        int i;
        short s;
        char c;
};



int main () {

        struct X x;
        struct Y y;
        struct Z z;
        
        printf("X = %d; Y = %d; Z = %d\n", sizeof(x), sizeof(y), sizeof(z));
        
        
        *******  A TERMINAR *******

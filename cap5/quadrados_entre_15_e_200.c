#include <stdio.h>

int main () {
    int i = 15;
    int quadrado;

    while (i <= 200)
    {
        quadrado = i*i;
        printf("%i\n", quadrado);
        i++;
        
    }
    
    return 0;
}
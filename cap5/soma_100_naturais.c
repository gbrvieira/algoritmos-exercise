#include <stdio.h>

int main () {
    int i = 1;
    int soma = 0;

    while (i <= 100)
    {
        soma = i+soma;
        printf("%i\n", soma);
        i++;
        
    }
    
    return 0;
}
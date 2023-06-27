#include <stdio.h>

int main () {
    int i = 1;
    int tabuada;
    int numero;


    printf("Digite um número: \n");
    scanf("%i", &numero);
    
    printf("Tabuada de adição: \n");
    while (i <= 10)
    {
        tabuada = i+numero;
        printf("%i + %i = %i\n", numero, i, tabuada);
        i++;
    }

    return 0;
}
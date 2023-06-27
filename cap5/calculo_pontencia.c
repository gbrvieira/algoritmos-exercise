#include <stdio.h>

int main () {
    int b, e, i = 1, resultado;

    printf("Digite o valor da base: \n");
    scanf("%i", &b);

    printf("Digite o valor do expoente: \n");
    scanf("%i", &e);
    
    if (b >= 0 && e >= 0)
    {
        while (i <= e)
        {
            resultado = resultado * b;
            i++;
        }
        
        printf("Uma potência de base %d elevada a um expoente %d é igual a: %d \n", b, e, resultado);
        
    }
    
    
    
    return 0;
}
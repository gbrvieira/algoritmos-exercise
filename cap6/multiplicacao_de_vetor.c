#include <stdio.h>

int main() {
    
    int vetorA[8], vetorB[8];

    for ( int i = 0; i < 8; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
    
    printf("A matriz B resultante da multiplicação da matriz A por 3 é: \n");

    for (int i = 0; i < 8; i++)
    {
        vetorB[i] = vetorA[i] * 3;
        printf("%d ", vetorB[i]);

    }
    

    return 0;
}

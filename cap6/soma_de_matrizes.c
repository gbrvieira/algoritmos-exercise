#include <stdio.h>

int main() {
    
    int vetorA[6], vetorB[6], vetorC[12];

    printf("Digite os valores pares da matriz A: \n");    

    for ( int i = 0; i < 6; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
        while (vetorA[i] % 2 != 0)
        {
            printf("O valor, não é par, digite outro valor: ");
            scanf("%d", &vetorA[i]);
       
        }
        
    }

    printf("Agora, digite os valores impares da matriz B: \n");    

    for ( int i = 0; i < 6; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorB[i]);
        while (vetorB[i] % 2 == 0)
        {
            printf("O valor, não é impar, digite outro valor: ");
            scanf("%d", &vetorB[i]);
        }
        
    }

    for (int i = 0; i < 12; i++) {
        if (i < 6) {
            vetorC[i] = vetorA[i];
        } else {
            vetorC[i] = vetorB[i - 6];
        }
    }

    printf("Os valores do vetor C, são: \n");
    
    for (int i = 0; i < 12; i++) {
        printf("%d ", vetorC[i]);
        
    }
}

#include <stdio.h>

#define TAMANHO 10

int main() {
    char nomes[TAMANHO][50]; // Vetor para armazenar os nomes das pessoas
    int i;

    printf("Digite os nomes das pessoas:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("\nNomes digitados:\n");

    for (i = 0; i < TAMANHO; i++) {
        printf("Nome %d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}

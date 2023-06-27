#include <stdio.h>

int main() {
    int i = 0, resultado = 1;

    while (i <= 15) {
        resultado *= 3;
        printf("%d ", resultado);
        i++;
    }

    return 0;
}

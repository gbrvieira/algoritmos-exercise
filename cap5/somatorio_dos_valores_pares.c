#include <stdio.h>

int main () {
   int i = 1, count = 0;

   while (i <= 500) {
        if (i % 2 == 0){
            count += i;
            printf("%d ", count);
        }
        i++;
   }

    return 0;
}
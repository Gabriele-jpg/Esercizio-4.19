#include <stdio.h>

int main(void) {
    int i;
    int num;
    int prim = 0;
    printf("Inserire il numero da determinare se e primo: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            prim = 1;
        }
    }
    if (prim) {
        printf("%d non e primo\n", num);
    } else {
        printf("%d e primo\n", num);
    }

    return 0;
}

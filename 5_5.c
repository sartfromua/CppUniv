#include <stdio.h>


int main() {
    int x1 = -1, x2 = -99, x3 = -99, x4 = -99, swapper;
    x1 = x2 + x4 + 100;
    printf("%d %d %d", x4, x3, x2, x1);
    while (x1 < 0) {
        swapper = x1;
        x1 = x2+x4+100;
        x4 = x3;
        x3 = x2;
        x2 = swapper;
        printf(" %d", x1);
    }
    printf("\nThe smallest positive number is %d", x1);
}

#include <stdio.h>
#include <math.h>


int main() {
    int n, i, y = 1;
    printf("n = ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        i = 2;
    } else i = 1;
    for (i; i<=n; i += 2) {
        y *= i;
    }
    printf("n!! = %d", y);
}

#include <stdio.h>


int main() {
    double b, b_n;
    int n, i;
    printf("b = ");
    scanf("%lf", &b);
    printf("n = ");
    scanf("%d", &n);
    b_n = 1 + 1.0/b;
    for (i = 0; i<n; i++) {
        b_n = b + 1.0/b_n;
    }
    printf("b_n = %lf", b_n);
}

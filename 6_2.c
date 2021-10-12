#include <stdio.h>


int main() {
    int n;
    unsigned k;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    n = n | (1<<k);
    printf("%d", n);
}

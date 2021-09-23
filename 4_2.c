#include <stdio.h>


int main() {
    int n, i;
    printf("n = ");
    scanf("%d", &n);
    printf("n! = 1");
    for (i=2; i<=n; i++) {
        printf("*%d", i);
    }
    printf("\nn! = 1");
    for (i=n-2; i>=0; i--) {
        printf("*%d", n-i);
    }

}

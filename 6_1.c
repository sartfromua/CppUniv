#include <stdio.h>


int main() {
    unsigned char n;
    printf("n (<64) = ");
    scanf("%hhu", &n);
    unsigned long res = 1 << n;
    printf("2^n = %lu", res);
}

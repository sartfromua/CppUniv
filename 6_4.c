#include <stdio.h>


int main() {
    unsigned m;
    printf("m = ");
    scanf("%ld", &m);
    m = m << 8;
    printf("%d\n", m);
    printf("%x", m);
}

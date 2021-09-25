#include <stdio.h>
#include <stdint.h>


uint16_t mult(uint8_t a, uint8_t b) {
    printf("%d bytes and %d bytes\n", sizeof(a), sizeof(b));
    return a*b;
}


int main() {
    uint8_t a,b;
    printf("a, b: ");
    scanf("%hhu %hhu", &a, &b);
    uint16_t c = mult(a,b);
    printf("%hu %hu bytes", c, sizeof(c));
}

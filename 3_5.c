#include <stdio.h>


int main() {
    float a, b;
    printf("Enter 2 comma separated numbers: ");
    scanf("%f, %f", &a, &b);
    if (a>b) {
    printf("%g is greater than %g", a, b);
    } else printf("%g is greater than %g", b, a);
}

#include <stdio.h>
#include <math.h>


int main() {
    float a=1;
    while (a != 0 && 1 + a != 1) {
        a /= 2;
        printf("\n%f", a);
    }
    printf("\n\n%f", a);
}

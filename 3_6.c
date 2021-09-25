#include <stdio.h>
#include <math.h>


int main() {
    float a, b, c;
    printf("Print 3 comma separated numbers :");
    scanf("%f, %f, %f", &a, &b, &c);
    if (a>b && a>c) {
        printf("Max number is %g\n", a);
    } else {
    if (b>a && b>c) {
        printf("Max number is %g\n", b);
    } else printf("Max number is %g\n", c);
    }
    if (a<b && a<c) {
        printf("Min number is %g\n", a);
    } else {
    if (b<a && b<c) {
        printf("Min number is %g\n", b);
    } else printf("Min number is %g\n", c);
    }
    // printf("Min number: %g\nMax number: %g", fmin(a,fmin(b,c)), fmax(a,fmax(b,c)));
}

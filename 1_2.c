#include <stdio.h>
#include <math.h>

int main() {
    float a1 = 0.0001, a2 = 24.33E5, a3 = M_PI, a4 = M_E, a5 = sqrt(5), a6 = log(100);
    printf("%.2f  %.2f  %.2f  %.2f  %.2f  %.2f", a1,a2,a3,a4,a5,a6);
    double b1 = 0.0001, b2 = 24.33E5, b3 = M_PI, b4 = M_E, b5 = sqrt(5), b6 = log(100);
    printf("\n%.2lf  %.2lf  %.2lf  %.2lf  %.2lf  %.2lf", b1,b2,b3,b4,b5,b6);
    long double c1 = 0.0001, c2 = 24.33E5, c3 = M_PI, c4 = M_E, c5 = sqrt(5), c6 = log(100);
    printf("\n%.2Lf  %.2Lf  %.2Lf  %.2Lf  %.2Lf  %.2Lf", c1,c2,c3,c4,c5,c6);
}

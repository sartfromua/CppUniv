#include <stdio.h>


int main() {
    double x,y,z, max;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    printf("z = ");
    scanf("%lf", &z);
    double xy = x*y, xz = x*z, yz = y*z;
    if (xy > xz) {
        max = xy;
    } else max = xz;
    if (max < yz) {
        max = yz;
    }
    printf("Max(xy,xz,yz) = %g", max);
}


#include <stdio.h>
#include <math.h>


double func_2_8(double x, double y) {
    double xy = x*y;
    return pow(xy, 2) + pow(xy, 3) + pow(xy, 4);
}


int main() {
    double x,y;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    printf("f = %lf", func_2_8(x, y));
}

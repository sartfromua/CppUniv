#include <stdio.h>
#include <math.h>

int main() {
    double m1, m2, r;
    printf("m1 = ");
    scanf("%lf", &m1);
    printf("m2 = ");
    scanf("%lf", &m2);
    printf("r = ");
    scanf("%lf", &r);
    double F = 6.673*pow(10,-11) * m1*m2 / pow(r,2);
    printf("F = %e", F);
}

#include <stdio.h>
#include <math.h>


int main() {
    unsigned n, i = 1;
    double y = 0, x, eps, fact = 1, adding;
    do{
        printf("eps(eps>0)= ");
        scanf("%lf",&eps);
    } while(eps<0.00001);
    printf("x = ");
    scanf("%lf", &x);
    adding = x;
    while (fabs(adding) > eps) {
        y += adding;
        fact *= 2*i * (2*i+1);
        adding = pow((-1), i)*pow(x,2*i+1)/fact;
        i++;
    }
    printf("y(x) = %lf \nsin(x) = %lf", y, sin(x));
}

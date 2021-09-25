#include <stdio.h>

double leakyRelu(double a, double x) {
    double res = 0;
    if (x<0) res = a*x;
    return res;
}


double leakyRelu_derivative(double a, double x) {
    double res = 0;
    if (x<0) res = a;
    return res;
}


int main() {
    double a, x;
    printf("a, x = ");
    scanf("%lf %lf", &a, &x);
    printf("leakyRelu(a,x) = %g\nleakyRelu'(a,x) = %g", leakyRelu(a,x), leakyRelu_derivative(a,x));
}

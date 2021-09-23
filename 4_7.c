#include <stdio.h>
#include <math.h>


float func(float x, int n) {
    int i;
    float y = 1, fact = 1;
    for (i=1; i<=n; i++) {
        fact *= i;
        y += pow(x,i)/fact;
    }
    return y;
}


int main() {
    float x, y;
    int n;
    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%d", &n);
    y = func(x,n);
    printf("y = %g", y);
}

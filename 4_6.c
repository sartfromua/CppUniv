#include <stdio.h>
#include <math.h>


int main() {
    int n, i;
    double res = sqrt(2);
    printf("n = ");
    scanf("%d", &n);
    for (i=2; i<=n; i++){
        res = sqrt(2+res);
    }
    printf("sqrt = %lf", res);
}

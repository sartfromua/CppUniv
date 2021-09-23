#include <stdio.h>
#include <math.h>


int main() {
    int n, i;
    float x, res;
    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);
    res = sin(x);
    for (i=1; i<n; i++){
        res = sin(res);
    }
    printf("res = %f", res);
}

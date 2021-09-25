#include <stdio.h>
#include <math.h>


int if_5_in_the_end(int n) {
    int res;
    if (n % 10 == 5) res = 1;
    return res;
}


int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Res = %d", if_5_in_the_end(n));
}

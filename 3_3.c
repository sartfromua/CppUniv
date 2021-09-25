#include <stdio.h>


int main() {
    long long int a, b, c;
    printf("Print 3 comma separated numbers :");
    scanf("%lld, %lld, %lld", &a, &b, &c);
    long long mult = a*b*c;
    printf("%lld", mult);
}

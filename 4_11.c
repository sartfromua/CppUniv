#include <stdio.h>
#include <math.h>


int main() {
    double sum = 0, geom_aver = 1;
    int number = 1, quantity = 0;
    while (number >= 1) {
        printf("a[%d] = ", quantity);
        scanf("%d", &number);
        if (number == 0) break;
        sum += number;
        geom_aver *= number;
        quantity++;
    }
    double aver = sum/quantity;
    geom_aver = pow(geom_aver, (double) 1/quantity);
    printf("Average: %g \nGeometric average: %g", aver, geom_aver);
}

#include <stdio.h>
#include <math.h>


int main() {
    int number;
    printf("number: ");
    scanf("%d", &number);
    int ones = number % 10, tens = number % 100 / 10, hundreds = number % 1000 / 100;
    printf("Ones: %d Tens: %d Hundreds: %d", ones, tens, hundreds);
    printf("\nSum of digits: %d", ones+tens+hundreds);
    printf("\nReversed: %d", ones*100 + tens*10 + hundreds);
}

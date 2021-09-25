#include <stdio.h>
#include <math.h>


int main() {
    int number;
    printf("number: ");
    scanf("%d", &number);
    int ones = number % 10, tens = number % 100 / 10, hundreds = number % 1000 / 100;
    if (ones != tens && tens != hundreds && ones != hundreds) {
        int digits[3], i, j, k;
        digits[0] = ones;
        digits[1] = tens;
        digits[2] = hundreds;
        for (i=0; i < 3; i++){
            for (j=0; j < 3; j++){
                for (k=0; k < 3; k++){
                    printf("%d ", digits[i] + digits[j]*10 + digits[k]*100);
                }
            }
        }
    }
}

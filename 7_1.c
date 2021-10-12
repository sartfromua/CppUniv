#include <stdio.h>
#define N 5
int main() {
    int numbers[N] = {1, 2, 3, 4, 5};
    double a = 2.1;
    int counter = 0, i;
    for (i = 0; i< N; i++) {
        printf("%d ", numbers[i]);
        if (numbers[i] < a) counter ++;
    }
    printf("\n%d", counter);
}

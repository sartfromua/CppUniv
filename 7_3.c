#include <stdio.h>
#include<math.h>
#define N 3


double SumArrayGreaterE(double array[], unsigned n) {
    double sum = 0;
    for (unsigned i=0; i<n; i++) {
        if (array[i] > M_E) sum += array[i];
    }
    return sum;
}


void InputArray(double* arr[], unsigned n) {
    for (int i=0; i<N; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
}


int main() {
    double array[N];
    InputArray(array, N);
    printf("Sum of elements = %lf", SumArrayGreaterE(array, N));
}

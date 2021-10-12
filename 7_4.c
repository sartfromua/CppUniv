#include <stdio.h>
#include<math.h>
#define N 5


double MaxEl(double array[], unsigned n) {
    double max = 0;
    for (unsigned i=0; i<n; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
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
    printf("Max element = %lf", MaxEl(array, N));
}

#include <stdio.h>
#include <stdlib.h>


void inputArray(double* array, int n) {
    for (int i = 0; i<n; i++) {
        printf("Array[%d] = ", i);
        scanf("%lf", &array[i]);
    }
}


void printArray(double* array, unsigned n){
    printf("\n");
    for (unsigned i = 0; i<n; i++) {
        printf("%g ", array[i]);
    }
}



double SumOfSquares(double* array, unsigned n){
    double res;
    for (unsigned i = 0; i<n; i++) {
        res += array[i] * array[i];
    }
    return res;
}


int main() {
    unsigned n;
    printf("n = ");
    scanf("%d", &n);
    double* array = (double*) malloc(sizeof(double)*n);
    inputArray(array, n);
    printArray(array, n);
    printf("\nResult: %g", SumOfSquares(array, n));
    free(array);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>


int inputArray(int* array) {
    int item, max_i;
    for (int i = 0; i<100; i++) {
        printf("Array[%d] = ", i);
        scanf("%int", &item);
        if (item == 0) return i;
        array[i] = item;
        max_i = i;
    }
    return max_i;
}


void countSquaresAndCubes(int* array, unsigned n) {
    double el;
    int squares = 0, cubes = 0;
    for (unsigned i; i<n; i++) {
        el = sqrt(array[i]);
        if (fabs(fmod(el,1)) < DBL_EPSILON) squares++;
        el = pow(array[i], 1/3.0);
        if (fabs(fmod(el,1)) < DBL_EPSILON) cubes++;
    }
    printf("\nThere are %d squares in list!", squares);
    printf("\nThere are %d cubes in list!", cubes);
}


int main() {
    int* array = (int*) malloc(sizeof(int)*100);
    int n = inputArray(array);
    countSquaresAndCubes(array, n);
    free(array);
}

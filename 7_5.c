#include <stdio.h>
#include<math.h>
#define N 5


void ShowArray(int array[], unsigned n) {
    for (unsigned i=0; i<n; i++) {
         printf("\nArray[%d] = %d ", i, array[i]);
    }
}


int SumOddElems(int array[], unsigned n) {
    int sum = 0;
    for (unsigned i=0; i<=n; i++) {
        if (array[i] % 2 == 1) sum += array[i];
    }
    return sum;
}


int SumEvenElems(int array[], unsigned n) {
    int sum = 0;
    for (unsigned i=0; i<=n; i++) {
        if (array[i] % 2 == 0) sum += array[i];
    }
    return sum;
}


void InputArray(int* arr[], unsigned n) {
    for (int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}


int main() {
    int array[N];
    //InputArray(array, N);
    for (int i=0; i<N; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
    //ShowArray(array, N);
    printf("Sum of odd elements = %d", SumOddElems(array, N));
    printf("\nSum of even elements = %d", SumEvenElems(array, N));
}

#include <stdio.h>
#define N 20


void ShowVect(double array[], unsigned n) {
    for (unsigned i=0; i<n; i++) {
         printf("%g ", array[i]);
    }
}


void InputVect(double mas[], unsigned n) {
    for (unsigned i=0; i<n; i++) {
        printf("Vect[%d] = ", i);
        scanf("%lf", &mas[i]);
    }
}


void VectAdd(double add[], double arr1[], double arr2[], unsigned n) {
    for (unsigned i=0; i<n; i++) {
        add[i] = arr1[i] + arr2[i];
    }
}


double ScalarMultiple(double arr1[N], double arr2[N], unsigned n) {
    double res = 0;
    for (unsigned i=0; i<n; i++) {
        res += arr1[i]*arr2[i];
    }
    return res;
}


int main() {
    double vect1[N], vect2[N], add[N];
    unsigned n;
    printf("n = ");
    scanf("%d", &n);
    InputVect(vect1, n);
    InputVect(vect2, n);
    printf("First vect: ");
    ShowVect(vect1, n);
    printf("\nSecond vect: ");
    ShowVect(vect2, n);
    printf("\nSum of vects: ");
    VectAdd(add, vect1, vect2, n);
    ShowVect(add, n);
    printf("\nScalar multiplication of vects: %g", ScalarMultiple(vect1, vect2, n));
}

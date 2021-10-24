#include <stdio.h>

#define N 20
#define M 20


void ShowArray(double array[N][M], unsigned n, unsigned m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
}


void InputArray(double array[N][M], unsigned n, unsigned m) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &array[i][j]);
    }
    }
}


void TransposeArray(double array[N][M], unsigned n, unsigned m) {
    double a, b;
    for (int i = 0; i<n; i++) {
        for (int j = i; j<m; j++) {
            a = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = a;
}}}


int main() {
    double array[N][M];
    unsigned n = 21, m = 21;
    while (n > 20) {
        printf("n = ");
        scanf("%d", &n);
    }
    while (m > 20) {
        printf("m = ");
        scanf("%d", &m);
    }
    InputArray(array, n, m);
    TransposeArray(array, n, m);
    ShowArray(array, n, m);
}

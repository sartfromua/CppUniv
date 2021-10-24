#include <stdio.h>

#define N 25
#define M 25


void ShowArray(double array[N][M], unsigned n, unsigned m) {
    for (unsigned i=0; i<n; i++) {
        for (unsigned j=0; j<m; j++) {
            printf("%lf ", array[i][j]);
        }
        printf("\n");
    }
}


void InputArray(double array[N][M], unsigned n, unsigned m) {
    double row[M];
    for (unsigned i = 0; i<n; i++) {
        printf("%d row: ", i);
//        scanf("%lf", &row); ?????
//        for (unsigned j = 0; j<m; j++){
//            array[j][i] = row[j];
//        }
    }
}


int main() {
    int array[N][M];
    unsigned n, m;
    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n > 25);
    do {
        printf("m = ");
        scanf("%d", &m);
    } while (m > 25);
    InputArray(array, n, m);
    ShowArray(array, n, m);
}

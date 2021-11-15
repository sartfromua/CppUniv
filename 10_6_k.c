#include <stdio.h>


typedef struct {
    int n, m;
    double values[255][255];
} Matrix;


Matrix inputMatrix() {
    Matrix matr;
    printf("n = ");
    scanf("%d", &matr.n);
    printf("m = ");
    scanf("%d", &matr.m);
    for (int i=0; i<matr.n; i++) {
        for (int j=0; j<matr.m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &matr.values[i][j]);
        }
    }
    return matr;
}


void printMatrix(Matrix matr) {
    for (int i=0; i<matr.n; i++) {
        printf("\n");
        for (int j=0; j<matr.m; j++) {
            printf("%g ",matr.values[i][j]);
        }
    }
}


Matrix sumOfMatrix(Matrix m1, Matrix m2) {
    Matrix res;
    if (m1.n != m2.n || m1.m != m2.m) {
        printf("Matrix can't be summed!");
        return res;
    }
    res.m = m1.m;
    res.n = m1.n;
    for (int i=0; i<m1.n; i++) {
        for (int j=0; j<m1.m; j++) {
            res.values[i][j] = m1.values[i][j] + m2.values[i][j];
        }
    }
    return res;
}


int main() {
    Matrix m1, m2;
    m1 = inputMatrix();
    m2 = inputMatrix();
    printMatrix(m1);
    printMatrix(m2);
    Matrix m_sum;
    m_sum = sumOfMatrix(m1, m2);
    printMatrix(m_sum);
}

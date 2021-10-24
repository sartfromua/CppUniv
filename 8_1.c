#include <stdio.h>
#define K 3


void ShowArray(int array[K][K]) {
    for (int i=0; i<K; i++) {
        for (int j=0; j<K; j++) {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}


int PasteEl(int array[K][K], int N, int M) {
    for (int i=0; i<K; i++) {
        for (int j=0; j<K; j++) {
            if (array[i][j] == M) array[i][j] = N;
    }}
    return array;
}


int main() {
    int array[K][K] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, N, M;
    printf("N = ");
    scanf("%d", &N);
    printf("M = ");
    scanf("%d", &M);
    PasteEl(array, N, M);
    printf("\n");
    ShowArray(array);
}

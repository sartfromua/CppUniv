#include <stdio.h>
#define K 3


void ShowArray(int array[K][K]) {
    for (int i=0; i<K; i++) {
        for (int j=0; j<K; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}


void PasteEl(int array[K][K], int i, int j, int a) {
    if (i < K && j < K) array[i][j] = a;
}


int main() {
    int array[K][K] = {{1.0, 2,3,}, {4,5,6}, {7,8,9} }, i, j, a;
    printf("i = ");
    scanf("%d", &i);
    printf("j = ");
    scanf("%d", &j);
    printf("a = ");
    scanf("%d", &a);
    ShowArray(array);
    PasteEl(array, i, j, a);
    printf("\n");
    ShowArray(array);
}

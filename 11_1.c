#include <stdio.h>
#include <stdlib.h>


void inputArray(double* array, int n) {
    for (int i = 0; i<n; i++) {
        printf("Array[%d] = ", i);
        scanf("%lf", &array[i]);
    }
}


void printArray(double* array, int n) {
    for (int i = 0; i<n; i++) {
        printf("\nArray[%d] = %g", i, array[i]);
    }
}


int writeFile(const char* filename, double array[], int n) {
    FILE* file = fopen(filename, "wb"); // open bin file for writing
    int res = fwrite(array, n, sizeof(*array), file); // write n*8 bytes from array int file
    fclose(file); // close file
    return res;
}


void clearFile(const char* fname) {
    FILE* file = fopen(fname, "wb");
    fclose(file);
}


int readFile(const char* filename, double *array) {
    FILE* file = fopen(filename, "rb"); // open bin file for reading

    double item;
    int k = 0;
    while (!feof(file)) { // until we can read file
        int res = fread(&item, 1, sizeof(item), file); // read 1 double from file
        if (res < 1) {
            break;
        }
        array[k++] = item;
    }

    fclose(file); // close file
    return k;
}


int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    double* array = (double*) malloc(n*sizeof(double));
    inputArray(array, n);

    char filename[255];
    printf("Input name of your file: ");
    scanf("%s", filename);

    int res = writeFile(filename, array, n);
    if (res < 1) {
        printf("Not all data were written!");
    } else {
        double* array2 = (double*)malloc(sizeof(double)*n);

        int m = readFile(filename, array2);
        for (int i=0; i<m; i++) {
            printf("%g, ", array[i]);
        }
        free(array2);
    }

    free(array);

}

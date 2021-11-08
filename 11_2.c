#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void inputArray(double* array, int n) {
    for (int i = 0; i<n; i++) {
        printf("Array[%d] = ", i);
        scanf("%lf", array[i]);
    }
}


void printArray(double* array, int n) {
    printf("\n");
    for (int i = 0; i<n; i++) {
        printf("Array[%d] = %g ", i, array[i]);
    }
}


int writeFile(const char* filename, double *array, int n) {
    FILE* file = fopen(filename, "wb"); // open bin file for writing
    int res = fwrite(array, n, sizeof(*array), file); // write n*8 bytes from array int file
    fclose(file); // close file
    return res;
}


int readFile(const char* filename, double *array) {
    FILE* file = fopen(filename, "rb"); // open bin file for reading
    if (file==NULL) printf("CANNOT OPEN FILE!");

    double item;
    int k = 0;
    while (!feof(file)) { // until we can read file
        int res = fread(&item, 1, sizeof(item), file); // read 1 double from file

        if (res != sizeof(item)) {
            //printf("READING ERROR!");
            break;
        }

        array[k++] = item;
        //printf("\nres = %d, a[%d] = %lf, %lf", res, k, item, array[k]);

    }
    fclose(file); // close file
    return k-1;
}


void clearFile(const char* fname) {
    FILE* file = fopen(fname, "wb");
    fclose(file);
}


void prepare_files(const char* fname1, const char* fname2) {
    double array[10] = {1,2,3,4,5,6,7,8,9,0};
    writeFile(fname1, array, 10);
    clearFile(fname2);
}


void printFileStatus(const char* fname1, const char* fname2) {
    FILE* file = fopen(fname1, "rb"); // open bin file for reading
    if (file==NULL) printf("CANNOT OPEN FILE!");

    printf("\nFile F:\n");
    double item;
    int k = 0;
    while (!feof(file)) { // until we can read file
        int res = fread(&item, 1, sizeof(item), file); // read 1 double from file

        if (res != sizeof(item)) {
            break;
        }

        printf("a[%d] = %g ", k, item);
        k++;
    }
    fclose(file); // close file


    file = fopen(fname2, "rb"); // open bin file for reading
    if (file==NULL) printf("CANNOT OPEN FILE!");

    printf("\nFile G:\n");
    k = 0;
    while (!feof(file)) { // until we can read file
        int res = fread(&item, 1, sizeof(item), file); // read 1 double from file

        if (res != sizeof(item)) {
            break;
        }

        printf("b[%d] = %g ", k, item);
        k++;
    }
    fclose(file); // close file
}


int main() {
    int n = 255;
    double* array = (double*) malloc(n*sizeof(double));

    char fname_1[255], fname_2[255];
    printf("\nInput name of file F: ");
    scanf("%s", fname_1);
    printf("\nInput name of file G: ");
    scanf("%s", fname_2);

    prepare_files(fname_1, fname_2);
    printFileStatus(fname_1, fname_2);

    int k = readFile(fname_1, array);
    printArray(array, k);

    double a;
    printf("\na = ");
    scanf("%lf", &a);

    int j =0;
    double* array1 = (double*) malloc(n*sizeof(double));
    for (int i=0; i<k; i++) {
        if (fabs(array[i]) < a+1) array1[j++] = array[i];
    }
    j--;
    free(array);
    double* array2 = (double*) malloc(j*sizeof(double));
    for (int i=0; i<j; i++) {
        array2[i] = array1[i];
    }
    free(array1);

    writeFile(fname_2, array2, j);
    writeFile(fname_1, array2, j);

    printFileStatus("11_2t", "11_2_1t");
    free(array2);
}


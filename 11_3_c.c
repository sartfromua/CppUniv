#include <stdio.h>
#include <math.h>
#include <float.h>


void fileInput(const char* fname) {
    FILE* file = fopen(fname, "wb+");
    double item = 1;
    while(1) {
        printf("Enter number(0 to exit): ");
        scanf("%lf", &item);
        if (item == 0) break;
        int res = fwrite(&item, sizeof(double), 1, file);
//        printf("\nres = %d, item = %lf", res, item);
        if (res < 1) printf("\nERROR while writing to file (in fileInput function), res = %d\n", res);
    }
    fclose(file);
}


void newFileWithFullSquares(const char* finname, const char* foutname) {
    printf("newf");
    FILE* fin = fopen(finname, "rb");
    printf("newf");
    FILE* fout = fopen(foutname, "wb+");
    printf("newf");
    while (!feof(fin)) {
        double item;
        int res_read = fread(&item, sizeof(double), 1, fin);
        if (res_read < 1) {
                printf("\nERROR while reading file (in newFileWithFullSquares function), res = %d\n", res_read);
        }
        if (fmod(sqrt(item), 1) < DBL_EPSILON) {
            int res_write = fwrite(&item, sizeof(double), 1, fout);
            if (res_write < 1) {
                printf("\nERROR while writing to file(in newFileWithFullSquares function), res = %d\n", res_write);
            }
        }
    }
    fclose(fin);
    fclose(fout);
}


void filePrint(const char* fname) {
    FILE* file = fopen(fname, "rb");
    printf("\nFile:\n");
    while (!feof(file)) {
        double item;
        int res = fread(&item, sizeof(double), 1, file);
        if (res < 1) {
            printf("\nERROR while reading file ( in filePrint function), res = %d\n, item = %lf", res, item);
            break;
        }
    }
    fclose(file);
    printf("\nENDP");
}


int main() {
    char* fin = "11_3_fin", fout = "11_3_fout";
    fileInput(fin);
    filePrint(fin);
    newFileWithFullSquares(fin, fout);
    filePrint(fout);
}

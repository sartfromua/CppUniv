#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


int main() {
    int n;
    cout << "n = ";
    cin >> n;
    int* int_array = (int*)malloc(sizeof(int)*n);
    for (int i=0; i<n; i++) {
        cout << "m(" << i << ") = ";
        cin >> int_array[i];
    }

    double* double_array = (double*)malloc(sizeof(double)*n);
    ifstream fin("12_4_in.txt");
    if (!fin) {
        cout << "File hasn't opened!";
        free(int_array);
        free(double_array);
        fin.close();
        return -1;
    }
    double item;
    for (int i=0; i<n; i++) {
        if (fin.eof()) {
            cout << "Not enough items in file!";
            free(int_array);
            free(double_array);
            fin.close();
            return -2;
        }
        fin >> item;
        double_array[i] = item;
    }
    fin.close();

    ofstream fout("12_4_out.txt");
    for (int i=0; i<n; i++) {
        fout << pow(double_array[i], int_array[i]) << " ";
    }

    free(int_array);
    free(double_array);
    fout.close();
}

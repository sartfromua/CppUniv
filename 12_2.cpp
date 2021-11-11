#include <iostream>
#include <cmath>
using namespace std;


int main () {
    unsigned n;
    cout << "n = ";
    cin >> n;
    unsigned long long* numbers = (unsigned long long*)malloc(sizeof(unsigned long long)*n);
    for (int j=0; j<n; j++) {
        cout << endl <<  "Number char by char: ";
        unsigned c;
        numbers[j] = 0;
        for (int i=9; i>=0; i--) {
            cin >> c;
            numbers[j] += c * pow(10,i);
        }
    }
    unsigned long long res = 0;
    for (int i=0; i<n; i++) {
        res += numbers[i];
    }
    cout << endl << "Sum = " << res;
    free(numbers);
}

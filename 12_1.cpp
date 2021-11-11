#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    double res = pow(x, y);
    cout << "x^y = " << res;
    int deg = 0;
    while (res >= 10) {
        deg++;
        res /= 10;
    }
    cout << " = " << res << "*10^" << deg << " = " << res << "e" << deg;
}

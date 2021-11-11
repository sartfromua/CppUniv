#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    unsigned n;
    cout << "n = ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        cout << setw(6) <<i;
    }
    cout << endl;
    for (int i=1; i<=n; i++) {
        cout.precision(3);
        cout << setw(6) << sqrt(i);
    }
}

#include <iostream>
using namespace std;


int main() {
    long double a, b, c;
    cout << "A=xxx.xxx\nA=";
    cin >> a;
    cout << "B=xxExxx\nB=";
    cin >> b;
    cout << "C=xxx.xxxx\nC=";
    cin >> c;
    long double aver_harm = 3 / (1/a + 1/b + 1/c);
    cout << "Average harmonic: " << aver_harm;
}

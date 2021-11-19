#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void firstDoubles(string line, double* doubles, int n, string delimiter) {
    char delim = delimiter[0];
    int j=0;
    int dot_flag = 0;
    string number;
    for (int i=0; i<line.size(); i++) {
        char c = line[i];

        if (isdigit(c)) {
            number += string(1, c);
        } else if (c == '.' && dot_flag == 0) {
            number += ".";
            dot_flag = 1;
        } else if (c == '.' && dot_flag == 1) {
            dot_flag = 0;
        } else if (c == delim && number != "") {
            cout << "'" << number << "'";
            doubles[j++] = stod(number);
            number = "";
            dot_flag = 0;
        }

        if (c == '-' && number.size() == 0) number = "-";

        if (j == n+1) break;
    }
}


int main() {
    string line = "Today we are gonna sum this: 12.0 + 23.567 -1 and 123.546774 + 0.1 -2.34 + 0.2 + 0.1235";
    int n = 7;
    string delimiter = " ";
    double* doubles = (double*)malloc(sizeof(double)*n);
    firstDoubles(line, doubles, n, delimiter);
    for (int i=0; i<n; i++) cout << endl << doubles[i] << " ";
}

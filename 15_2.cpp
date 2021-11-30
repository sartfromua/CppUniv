#include <iostream>
#include <cmath>
using namespace std;


class Point {
    private:
        double x, y;
        static int counter;
    public:

        void input() {
            cout << "x = ";
            cin >> x;
            cout << "y = ";
            cin >> y;
            counter++;
        }

        void print() {
            cout << x << ";" << y;
        }

        double len(Point p1) {
            return sqrt(pow((x-p1.x),2)+pow(y-p1.y,2));
        }

        static int getCounter() {
            return counter;
        }

        Point(double x, double y) {
            this->x = x;
            this->y = y;
        }

        Point() {}
};

int Point::counter = 0;

int main() {
    double per;
    Point p1, p2, p_first;
    p1.input();
    p_first = p1;
    while (1) {
        int flag;
        cout << "New point?(Yes - 1/No - 0) ";
        cin >> flag;
        if (flag == 0) break;
        p2.input();
        per += p1.len(p2);
        p1 = p2;
    }
    per += p1.len(p_first);
    cout << "There are " << Point::getCounter() << " points";
    cout << endl << "Perimeter: " << per;
}

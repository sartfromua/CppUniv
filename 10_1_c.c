#include <stdio.h>


struct Point {
    double x;
    double y;
};


typedef struct Rectangle {
    struct Point point1;
    struct Point point2;
} Rectangle;


void inputPoint(struct Point *point) {
    printf("x = ");
    scanf("%lf", &point->x);
    printf("y = ");
    scanf("%lf", &point->y);
}


void printPoint(struct Point point) {
    printf("(%g;%g)", point.x, point.y);
}


void printRect(struct Rectangle rect) {
    printPoint(rect.point1);
    printPoint(rect.point2);
}


void inputRect(struct Rectangle *Rect) {
    struct Point p1, p2;
    inputPoint(&p1);
    inputPoint(&p2);
    (*Rect).point1 = p1; // Rect->point1 = p1;
    (*Rect).point2 = p2;
}


int main() {
    Rectangle rect1;
    inputRect(&rect1);
    printRect(rect1);
}

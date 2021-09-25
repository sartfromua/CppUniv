#include <stdio.h>
#include <math.h>


int main() {
    float a,b,c;
    printf("ax^2 + bx + c = 0\nEnter a,b,c separated by comma: ");
    scanf("%f, %f, %f", &a, &b, &c);
    float D = b*b - 4*a*c;
    if (fabs(a) < 0.000001 && fabs(b) < 0.000001 && fabs(c) < 0.000001) {
        printf("Roots are all real numbers!");
    } else {
    if (fabs(a) < 0.000001 && fabs(b) < 0.000001) {
        printf("There are no roots!");
    } else{
    if (fabs(a) < 0.000001) {
        printf("There is one root: %g", -c/b);
    } else {
    if (D<0) {
        printf("There are no roots!");
    } else {
    if (fabs(D) < 0.000001) {
        printf("There is one root: %g", -b/2/a);
    } else {
    if (D>0) {
        printf("There are two roots: %g, %g", (-b+sqrt(D))/2/a, (-b-sqrt(D))/2/a);
    }
    }
    }
    }
    }
    }


    printf("\n\nax^4 + bx^2 + c = 0\nEnter a,b,c separated by comma: ");
    scanf("%f, %f, %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if (fabs(a) < 0.000001 && fabs(b) < 0.000001 && fabs(c) < 0.000001) {
        printf("Roots are all real numbers!");
    } else {
        if (fabs(a) < 0.000001 && fabs(b) < 0.000001) {
        printf("There are no roots!");
    } else{
    if (fabs(a) < 0.000001) {
        if (-c/b > 0){
        printf("There are two roots: %g, %g", sqrt(-c/b), -sqrt(-c/b));
        } else printf("There are no roots!");
    } else {
    if (D<0) {
        printf("There are no roots!");
    } else {
    if (fabs(D) < 0.000001) {
        if (-b/2/a > 0) {
            float root1 = -b/2/a, root2 = b/2/a;
            printf("There are two roots: %g, %g", root1, root2);
        } else printf("There are no roots!");
    } else {
    if (D>0) {
        if ((-b+sqrt(D))/2/a > 0 && (-b-sqrt(D))/2/a > 0) {
                printf("There are four roots: %g, %g, %g, %g", (-b+sqrt(D))/2/a, -(-b+sqrt(D))/2/a, (-b-sqrt(D))/2/a, -(-b-sqrt(D))/2/a);
        } else {
            if ((-b+sqrt(D))/2/a > 0) {
                printf("There are two roots: %g, %g", (-b+sqrt(D))/2/a, -(-b+sqrt(D))/2/a);
            } else {
                 if ((-b-sqrt(D))/2/a > 0) {
                printf("There are two roots: %g, %g", (-b-sqrt(D))/2/a, -(-b-sqrt(D))/2/a);
            } else printf("There are no roots!");
        }

    }
    }
    }
}
}
}
    }}

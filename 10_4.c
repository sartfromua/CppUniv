#include <stdio.h>
#include <math.h>


int gcd(int a, int b) {
    int remainder = a % b;

    if (remainder == 0) {
        return b;
    }

    return gcd(b, remainder);
}


typedef struct Rational{
    int numerator;
    int denominator;
} Rational ;


void reduceRational(Rational* n) {
    int g = gcd(n->denominator, n->numerator);
    n->denominator /= g;
    n->numerator /= g;
}

Rational inputRational() {
    Rational number;
    printf("a/b:\na = ");
    scanf("%d", &number.numerator);
    printf("b = ");
    scanf("%d", &number.denominator);
    return number;
}


void printRational(Rational n) {
    if (n.numerator == 0) {
        printf("\n0");
    } else {
        printf("\n");
        if ((n.numerator < 0 && n.denominator > 0) || (n.numerator > 0 && n.denominator < 0)) printf("-");
        printf("%d/%d",  abs(n.numerator), abs(n.denominator));
    }
}


Rational sumRational(Rational n1, Rational n2) {
    Rational sum;
    if (n1.denominator == n2.denominator) {
        sum.numerator = n1.numerator + n2.numerator;
        sum.denominator = n1.denominator;
    } else {
        sum.denominator = n1.denominator* n2.denominator;
        sum.numerator = n1.numerator*n2.denominator + n2.numerator*n1.denominator;
    }
    reduceRational(&sum);
    return sum;
}


Rational multRational(Rational n1, Rational n2) {
    Rational mult;
    mult.denominator = n1.denominator*n2.denominator;
    mult.numerator = n1.numerator*n2.numerator;
    reduceRational(&mult);
    return mult;
}


int cmp_lesser(Rational n1, Rational n2) {
    if (n1.denominator == n2.denominator) {
        return n1.numerator < n2.numerator;
    } else {
        int a = n1.numerator * n2.denominator;
        int b = n2.numerator * n1.denominator;
        return a < b;
    }
}


int cmp_greater(Rational n1, Rational n2) {
    if (n1.denominator == n2.denominator) {
        return n1.numerator > n2.numerator;
    } else {
        int a = n1.numerator * n2.denominator;
        int b = n2.numerator * n1.denominator;
        return a > b;
    }
}


int cmp_equal(Rational n1, Rational n2) {
    if (n1.denominator == n2.denominator && n1.numerator == n2.numerator) return 1;
    else return 0;
}


int main() {
    Rational number1, number2, sum, mult;
    number1 = inputRational();
    number2 = inputRational();
    sum = sumRational(number1, number2);
    mult = multRational(number1, number2);
    printf("Sum:");
    printRational(sum);
    printf("\nMult:");
    printRational(mult);
    printf("\nFirst is greater then second: %d", cmp_greater(number1,number2));
    printf("\nRationals are equal: %d", cmp_equal(number1,number2));
}

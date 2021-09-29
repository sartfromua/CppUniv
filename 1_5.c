#include <stdio.h>


int main() {
    float x;
	printf("x = ");
	scanf_s("%f", &x);
	float x2 = x * x;
	printf("x^4 = %f", x2 * x2);
	float x4 = x2 * x2;
	float x9 = x4 * x4 * x;
	printf("\nx^9 = %f", x9);
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	printf("\nx^28 = %f", x16 * x8 * x4);
	printf("\nx^6 = %f", x4 * x2);
	float x5 = x4 * x;
	printf("\nx^15 = %f", x5 * x5 * x5);
	float x32 = x16 * x16;
	printf("\nx^64 = %f", x32 * x32);
}

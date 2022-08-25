/*
 * ex6.c
 *
 *  Created on: Aug 25, 2022
 *      Author: ibrahim yosry
 */

#include <stdio.h>

void swap(float* x, float* y);

int main(void)
{
	float a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	swap(&a, &b);
	printf("After swapping, value of a = %.2f\n", a);
	printf("After swapping, value of b = %.2f\n", b);
	return 0;
}

void swap(float* x, float* y)
{
	float temp = *x;
	*x = *y;
	*y = temp;
}

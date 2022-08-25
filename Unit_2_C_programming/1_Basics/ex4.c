/*
 * ex4.c
 *
 *  Created on: Aug 25, 2022
 *      Author: ibrahim yosry
 */

#include <stdio.h>

int main(void)
{
	float x, y, mul;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f\n%f", &x, &y);
	mul = x * y;
	printf("Product: %f", mul);
	return 0;
}

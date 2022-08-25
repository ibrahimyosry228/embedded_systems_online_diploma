/*
 * ex3.c
 *
 *  Created on: Aug 25, 2022
 *      Author: ibrahim yosry
 */

#include <stdio.h>

int main(void)
{
	int x, y, sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d\n%d", &x, &y);
	sum = x + y;
	printf("sum: %d", sum);
	return 0;
}

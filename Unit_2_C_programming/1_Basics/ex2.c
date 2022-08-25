/*
 * ex2.c
 *
 *  Created on: Aug 25, 2022
 *      Author: ibrahim yosry
 */

#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d", x);
	return 0;
}

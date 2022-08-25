/*
 * ex5.c
 *
 *  Created on: Aug 25, 2022
 *      Author: ibrahim yosry
 */

#include <stdio.h>

int main(void)
{
	char x;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &x);
	printf("ASCII value of %c = %d", x, x);
	return 0;
}

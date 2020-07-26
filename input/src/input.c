/*
 ============================================================================
 Name        : input.c
 Author      : arun vijay
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	printf("Please Enter a Name");
	scanf("%c",&a);
	printf("This is your name %c ",a);
	return EXIT_SUCCESS;
}

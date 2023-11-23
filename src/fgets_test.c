/*
 ============================================================================
 Name        : fgets_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// setvbuf(stdout, NULL, _IONBF, 0);
	char buf[10];
	const int size = sizeof(buf);
	fgets(buf, size, stdin);
	puts(buf);
	fgets(buf, size, stdin);
	puts(buf);
	return EXIT_SUCCESS;
}

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
#include <string.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char buf[10];
	char* cr;
	const int size = sizeof(buf);
	fgets(buf, size, stdin);
	cr = strchr(buf, '\n');
	if(cr != NULL) {
		*cr = '\0';
	}
	puts(buf);
	fgets(buf, size, stdin);
	cr = strchr(buf, '\n');
	if(cr != NULL) {
		*cr = '\0';
	}
	puts(buf);
	return EXIT_SUCCESS;
}

#define _CRT_SECURE_NO_WARNINGS

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
#include <float.h>
#include <errno.h>


size_t myStrlen(const char* str) {
	char* tmpStr = str;
	while (*tmpStr) tmpStr++;
		return (tmpStr - str);
}


int main() {
	printf("Exe_5:\n=========\n");

	char len[] = "sakjhfjsdhf";
	printf("%d", strlen(len));

	return 0;
}
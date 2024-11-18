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



int main() {
	printf("Exe_4:\n=========\n");

	return 0;
}




//Q1

//	lastLetter();
//int lastLetter() {
//	char buff[255];
	//printf("Please enter a string:\n");
	//scanf("%254s", buff);
	//int index = strlen(buff);
//	printf("The last letter is: %c", buff[index - 1]);
//}

//Q2

//	char strings[15][255];
//	printf("Please enter a string:\n");
//	for (int i = 0; i < 15; i++) {
//		printf("String %d: ", i + 1);
//		scanf("%254s", strings[i]);
//	}
//	printf("\nStrings where the first and last character are the same:\n");
//	for (int i = 0; i < 15; i++) {
//		if (isTheSame(strings[i])) {
//			printf("%s\n", strings[i]);
//		}
//	}
//int isTheSame(char buff[]) {
//	int index = strlen(buff);
//	return buff[0] == buff[index - 1];
//}
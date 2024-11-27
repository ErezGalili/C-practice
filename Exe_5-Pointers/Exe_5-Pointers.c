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
	printf("Exe_5:\n=========\n");



	return 0;
}




//Q1

//size_t myStrlen(const char* str) {
//	char* tmpStr = str;
//	while (*tmpStr) tmpStr++;
//		return (tmpStr - str);
//}

//Q2

//int MyStrcmp(const char* str1, const char* str2) {
//    while (*str1 && *str2) {
//        if (*str1 != *str2) {
//            return *str1 - *str2;
//        }
//        str1++;
//        str2++;
//    }
//    return *str1 - *str2;
//}

//Q3

//char* MyStrcpy(char* destination, const char* source) {
//    char* destStart = destination;
//    while (*source) {
//        *destination = *source;
//        destination++;
//        source++;
//    }
//    *destination = '\0';
//    return destStart;
//}

//Q4

//char* MyStrncpy(char* destination, const char* source, size_t num) {
//    char* destStart = destination;
//    for (size_t i = 0; i < num; i++) {
//        if (*source) {
//            *destination = *source;
//            source++;
//        }
//        else {
//            *destination = '\0';
//        }
//        destination++;
//    }
//    return destStart;
//}

//Q5

//char* MyStrcat(char* destination, const char* source) {
//    char* destStart = destination;
//    while (*destination) {
//        destination++;
//    }
//    while (*source) {
//        *destination = *source;
//        destination++;
//        source++;
//    }
//    *destination = '\0';
//    return destStart;
//}

//Q6

//char* MyStrncat(char* destination, const char* source, size_t num) {
//    char* destStart = destination;
//    while (*destination) {
//        destination++;
//    }
//    while (num && *source) {
//        *destination = *source;
//        destination++;
//        source++;
//        num--;
//    }
//    *destination = '\0';
//    return destStart;
//}
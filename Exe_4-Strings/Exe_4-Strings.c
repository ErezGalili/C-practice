﻿#define _CRT_SECURE_NO_WARNINGS

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




//int myStrcmp(char str1[], char str2[]) {
//	int counter = 0;
//	while ((unsigned char)str1[counter] == tolower((unsigned char)str2[counter]) && str1[counter] != '\0') counter++;
//	return tolower((unsigned char)str1[counter]) - tolower((unsigned char)str2[counter]);
//}

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

//Q3

//char st[] = "HAPPY BIRTHDAY TO YOU";
//printf("%d", countLastY(st));
//int countLastY(char st[100]) {
//	int countY = 0;
//	for (int i = 0; st[i]; i++) {
//		if (isalpha(st[i]) || st[i] == ' ') {
//			if (st[i] == ' ' && st[i - 1] == 'Y') {
//				countY++;
//			}
//		}
//	}
//	return countY;
//}

//Q4

//int printStr(char s1[], char s2) {
//	if (strlen(s1) - strlen(s2) >= strlen(s1)) {
//		printf(s1);
//	}
//	else if (strlen(s2) - strlen(s1) >= strlen(s2)) {
//		printf(s2);
//	}
//	else {
//		printf("%s\n", (strlen(s1) < strlen(s2)) ? s1 : s2);
//	}
//}

//Q6

//char str[] = "ajdufkrjsjdhvhcuxj";
//reverse(str);
//printf("%s", str);
//void reverse(char str[]) {
//    int len, temp;
//    len = strlen(str);
//    for (int i = 0; i < len / 2; i++)
//    {
//        temp = str[i];
//        str[i] = str[len - i - 1];
//        str[len - i - 1] = temp;
//    }
//}

//Q7

//char ary1[] = "abaabaabaabaabaabaaba";
//char ary2[] = "aba";
//printf("%d ", countOccurences(ary1, ary2));
//unsigned countOccurences(const char s1[], const char s2[]) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	int count = 0;
//	for (int i = 0; i <= len1 - len2; i++) {
//		int match = 1;
//		for (int j = 0; j < len2; j++) {
//			if (s1[i + j] != s2[j]) {
//				match = 0;
//				break;
//			}
//		}
//		if (match) {
//			count++;
//		}
//	}
//	return count;
//}

//Q8

//char getChar[] = "ab600cw580d12";
//printf("%d", addCountFromString(getChar));
//int addCountFromString(char getChar[]) {
//    int value = 0;
//    int currentNum = 0;
//    for (int i = 0; i < strlen(getChar); i++) {
//        if (isdigit(getChar[i])) {
//            currentNum = currentNum * 10 + (getChar[i] - 48);
//        }
//        else {
//            value += currentNum;
//            currentNum = 0;
//        }
//    }
//    value += currentNum;
//    return value;
//}

//Q9

//char src[] = "e-r-e-t-z-n-e-h-e-d-e-r-e-t", sep = '-';
//deleteChar(src, sep);
//printf(src);
//void deleteChar(char src[], char c) {
//	int index = 0;
//	for (int i = 0; src[i]; i++) {
//		if (src[i] != c) {
//			src[index] = src[i];
//			index++;
//		}
//	}
//	src[index] = '\0';
//}

//Q10

//void caesarCipher(const char str[], int key) {
//    char encrypted[255];
//    int i = 0;
//    while (str[i] != '\0') {
//        char c = str[i];
//        if (isalpha(c)) {
//            char base = islower(c) ? 'a' : 'A';
//            encrypted[i] = (c - base + key) % 26 + base;
//        }
//        else {
//            encrypted[i] = c;
//        }
//        i++;
//    }
//    encrypted[i] = '\0';
//    printf("Encrypted string: %s\n", encrypted);
//}
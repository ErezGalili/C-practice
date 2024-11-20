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


int addCountFromString(char getChar[]) {
    int value = 0;
    int currentNum = 0;
    for (int i = 0; i < strlen(getChar); i++) {
        if (isdigit(getChar[i])) {
            currentNum = currentNum * 10 + (getChar[i] - 48);
        } else {
            value += currentNum;
            currentNum = 0;
        }
    }
    value += currentNum;
    return value;
}


int main() {
	printf("Exe_4:\n=========\n");

    char getChar[] = "ab600cw580d12";
    printf("%d", addCountFromString(getChar));

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

//int myStrcmp(char str1[], char str2[]) {
//	int counter = 0;
//	while ((unsigned char)str1[counter] == tolower((unsigned char)str2[counter]) && str1[counter] != '\0') counter++;
//	return tolower((unsigned char)str1[counter]) - tolower((unsigned char)str2[counter]);
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
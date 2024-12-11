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


int calculateCheckDigit(const char id[]) {
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        int digit = id[i] - '0';
        int multiplier = (i % 2 == 0) ? 1 : 2;
        int product = digit * multiplier;
        if (product > 9) product = product / 10 + product % 10;
        sum += product;
    }
    int checkDigit = (10 - (sum % 10)) % 10;
    return checkDigit;
}

int isIdValid(const char* id) {
    return id[8]-'0' == calculateCheckDigit(id);
}

int main() {
	printf("Practice:\n=========\n");

    char id[9] = "12345678";
    int checkDigit = calculateCheckDigit(id);
    printf("The check digit for ID %s is: %d\n", id, checkDigit);
    char id2[9] = "027460690";
    printf("%d", isIdValid(&id2));

	return 0;
}






/*
    int x = 950, y = 1050;
    printf("%d", getMaxNumBtwn(&x, &y));
int rtnNumSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int getMaxNumBtwn(int* left, int* right) {
    int maxSum = 0;
    int tempSum = 0;
    int maxNum = *left;

    for (int i = *left; i < *right; i++) {
        tempSum = rtnNumSum(i);
        if (tempSum > maxSum) {
            maxSum = tempSum;
            maxNum = i;
        }
    }
    return maxNum;
}




*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    printf("Exe_2:\n=========\n");

    return 0;
}



//Q2

    //checkEvenOddDigits()
//void checkEvenOddDigits() {
//    int num, evenCount = 0, oddCount = 0;
//
//    printf("Enter number: \n");
//    scanf("%d", &num);
//
//    for (; num > 0; num /= 10) {
//        int digit = num % 10;
//
//        if (digit % 2 == 0) {
//            evenCount++;
//        }
//        else {
//            oddCount++;
//        }
//    }
//
//    if (evenCount > oddCount) {
//        printf("Larger\n");
//    }
//    else if (evenCount < oddCount) {
//        printf("Smaller\n");
//    }
//    else {
//        printf("Equal\n");
//    }
//}

//Q3-4

//unsigned long long reverse(unsigned int x) {
//
//    unsigned long reversedtNum = 0;
//    while (x != 0) {
//        reversedtNum *= 10;
//        reversedtNum += x % 10;
//        x /= 10;
//    }
//    return reversedtNum;
//}
//
//unsigned long long merge(unsigned int a, unsigned int b) {
//    a = reverse(a);
//    b = reverse(b);
//    
//    unsigned long merged = 0;
//    while (a != 0 || b != 0) {
//
//        if (a != 0) {
//            merged *= 10;
//            merged += a % 10;
//            a /= 10;
//        }
//
//        if (b != 0) {
//            merged *= 10;
//            merged += b % 10;
//            b /= 10;
//        }
//    }
//    return merged;
//}
//
//unsigned int num1, num2;
//printf("Enter numbers: ");
//scanf("%u%u", &num1, &num2);
//
//printf("Merged: %llu\n", merge(num1, num2));

//Q6

//    findUNumbs();
//int findUNumbs() {
//    for (int i = 1000; i <= 9900; i++) {
//            if ((i % 100 + i / 100)*(i % 100 + i / 100) == i) {
//                printf("%d\n", i);
//            }
//    }
//}

//Q9

//    thirdPower();
//int thirdPower() {
//    int num1, num2, num3;
//    for (int i = 100; i <= 999; i++){
//        num1 = i / 100;
//        num2 = (i / 10) % 10;
//        num3 = i % 10;
//        num1 = pow(num1, 3);
//        num2 = pow(num2, 3);
//        num3 = pow(num3, 3);
//        if (num1 + num2 + num3 == i) {
//            printf("%d\n", i);
//        }
//    }
//}

//Q10

//   findFiveMB4();
//findFiveMB4() {
//    for (int i = 10000; i <= 99999; i++) {
//        if (i*4 == reverse(i)) {
//            printf("%d", i);
//        }
//    }
//}

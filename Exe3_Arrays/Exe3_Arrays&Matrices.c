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

double gradeMatrices() {
	double arr[2][5];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 5; j++) {
			printf("Enter a grade from %d grade: ", i);
			scanf("%lf", &arr[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			printf("The grade in class %d is %lf ", i, arr[i][j]);
		}
	}
}

int main() {
	printf("Exe_2:\n=========\n");
	gradeMatrices();

	return 0;
}


//Test

//int firstArray() {
//    int myArray[5];
//    for (int i = 0; i < 5; i++)
//    {
//        myArray[i] = i + 5;
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d, ", myArray[i]);
//    }
//}

//Q2

//    countDigits();
//int countDigits() {
//    int number;
//    printf("Enter a number: \n");
//    scanf("%d", &number);
//    int digitCount[10] = { 0 };
//
//    while (number > 0) {
//        int digit = number % 10;
//        digitCount[digit]++;
//        number /= 10;
//    }
//
//    for (int i = 0; i < 10; i++) {
//        if (digitCount[i] > 0) {
//            printf("The number %d apears %d times\n", i, digitCount[i]);
//        }
//    }
//}

//Q3

//    unsigned int n = 8;
//    unsigned int a[] = { 1,2,3,5,6,7,8 };
//    unsigned int missing = find_missing(a, n);
//    printf("The missing number is: %u\n", missing);
//unsigned int find_missing(unsigned int a[], unsigned int n) {
//    unsigned int expected_sum = n * (n + 1) / 2;
//
//    unsigned int actual_sum = 0;
//
//    for (unsigned int i = 0; i < n - 1; i++) {
//        actual_sum += a[i];
//    }
//
//    return expected_sum - actual_sum;
//}

//Q4

//countOnes();
//int countOnes() {
//    int testNum[] = { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1 };
//        int acounter[12] = { 0 };
//        int counter = 0;
//        for (int i = 0; i < 12; i++) {
//            if (testNum[i] == 1) {
//                counter++;
//            } else {
//                if (counter > 0) {
//                    acounter[counter]++;
//                }
//                counter = 0;
//            }
//        }
//        if (counter > 0) {
//            acounter[counter]++;
//        }
//        for (int i = 0; i < 12; i++) {
//            if (acounter[i]) {
//                printf("%d series of %d ones\n",acounter[i] ,i);
//            }
//        }
//        return 0;
//}

//Q5

//int heights[] = { 206, 350, 300, 167, 406, 310, 328, 250, 200, 120, 400, 380, 435, 200, 337, 200 };
    //int size = 16;
    //printf("%d", countPeaks(heights, size));
//int midMax(float a, float b, float c) {
//    return (a < b && b > c);
//}
//
//int countPeaks(int heights[], int size) {
//    int count_Peaks = 0;
//    for (int i = 1; i <= size - 1; i++) {
//        if (midMax(heights[i - 1], heights[i], heights[i + 1])) {
//            count_Peaks++;
//        }
//    }
//    return count_Peaks;
//}

//Q6

//	int a[] = { 1, 2, 3, 4, 5 };
//	int n = 5;
//	checkMeansInequality(a, n);
//float arithmeticMean(int a[], int n) {
//	float sum = 0;
//	for (int i = 0;i < n;i++) {
//		sum += a[i];
//	}
//	float res = sum / n;
//	return res;
//}
//float geometricMean(int a[], float n) {
//	float sum = 1.0;
//	for (int i = 0; i < n; i++) {
//		sum *= a[i];
//	}
//	float res = pow(sum, (1 / n));
//	return res;
//}
//float harmonicMean(int a[], float n) {
//	float sum = 0;
//	for (int i = 0;i < n;++i)
//	{
//		sum += 1 / (float)a[i];
//	}
//	float res = n / sum;
//	return res;
//}
//void checkMeansInequality(int a[], int n) {
//	float am = arithmeticMean(a, n);
//	float gm = geometricMean(a, n);
//	float hm = harmonicMean(a, n);
//
//	if (hm < gm && gm < am) {
//		printf("Means inequality holds: Harmonic Mean <= Geometric Mean <= Arithmetic Mean\n");
//	} else if (hm == gm && gm == am && hm == am){
//		printf("There are all equal\n");
//	} else {
//		printf("Means inequality does not hold.\n");
//	}
//	printf("Arithmetic Mean: %.2f\n", am);
//	printf("Geometric Mean: %.2f\n", gm);
//	printf("Harmonic Mean: %.2f\n", hm);
//}

//Q8

//int sumNeighbors(int matrix[MAX_SIZE][MAX_SIZE], int i, int j, int n) {
//    int sum = 0;
//
//    for (int row = i - 1; row <= i + 1; row++) {
//        for (int col = j - 1; col <= j + 1; col++) {
//            if (row >= 0 && row < n && col >= 0 && col < n) {
//                sum += matrix[row][col];
//            }
//        }
//    }
//
//    return sum;
//}
//
//int stam() {
//    int n;
//    int matrix[MAX_SIZE][MAX_SIZE];
//    int newMatrix[MAX_SIZE][MAX_SIZE];
//
//    printf("Enter the size of the matrix (N): ");
//    scanf("%d", &n);
//
//    printf("Enter the elements of the matrix:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            newMatrix[i][j] = sumNeighbors(matrix, i, j, n);
//        }
//    }
//
//    printf("\nOriginal Matrix:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("\nNew Matrix:\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", newMatrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
	
//Q14

//aarNoZeros();
//int removeZeros(int a[], int n) {
//	int index = 0;
//	for (int i = 0; i < n;i++) {
//		if (a[i]) {
//			a[index] = a[i];
//			index++;
//		}
//	}
//	for (int i = index; i < n;i++) {
//		a[i] = 0;
//	}
//	return index;
//}
//
//int aarNoZeros() {
//	int a[] = { 0,1,3,-2,0,0,7,2,0 };
//	int n = 9;
//}
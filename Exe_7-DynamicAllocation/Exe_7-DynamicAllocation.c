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


typedef struct {
    char* name;
    char id[9];
} Person;
typedef struct {
    Person dad;
    Person mom;
    Person* children[10];
    int numChildren;
} Family;

void readFamily(Family* family) {
    char buffer[100];

    printf("\nEnter dad's name: ");
    scanf(" %[^\n]", buffer);
    family->dad.name = (char*)malloc(strlen(buffer) + 1);
    if (family->dad.name == NULL) {
        printf("Memory allocation failed for dad's name!\n");
        return 1;
    }
    strcpy(family->dad.name, buffer);
    printf("Enter dad's ID (up to 9 digits): ");
    scanf("%9s", family->dad.id);

    printf("\nEnter mom's name: ");
    scanf(" %[^\n]", buffer);
    family->mom.name = (char*)malloc(strlen(buffer) + 1);
    if (family->mom.name == NULL) {
        printf("Memory allocation failed for mom's name!\n");
        return 1;
    }
    strcpy(family->mom.name, buffer);
    printf("Enter mom's ID (up to 9 digits): ");
    scanf("%9s", family->mom.id);

    printf("\nEnter number of children (max 10): ");
    scanf("%d", &family->numChildren);

    for (int i = 0; i < family->numChildren; i++) {
        printf("\nEnter child %d's name: ", i + 1);
        scanf(" %[^\n]", buffer);

        family->children[i] = (Person*)malloc(sizeof(Person));
        if (family->children[i] == NULL) {
            printf("Memory allocation failed for child %d!\n", i + 1);
            return 1;
        }

        family->children[i]->name = (char*)malloc(strlen(buffer) + 1);
        if (family->children[i]->name == NULL) {
            printf("Memory allocation failed for child %d's name!\n", i + 1);
            return 1;
        }
        strcpy(family->children[i]->name, buffer);

        printf("Enter child %d's ID (up to 9 digits): ", i + 1);
        scanf("%9s", family->children[i]->id);
    }
}

void printFamily(const Family* family) {
    printf("\nFather's details:\n");
    printf("Name: %s, ID: %s\n", family->dad.name, family->dad.id);

    printf("\nMother's details:\n");
    printf("Name: %s, ID: %s\n", family->mom.name, family->mom.id);

    printf("\nChildren's details:\n");
    for (int i = 0; i < family->numChildren; i++) {
        printf("Child %d: Name: %s, ID: %s\n", i + 1, family->children[i]->name, family->children[i]->id);
    }
}

void freeFamily(Family* family) {
    free(family->dad.name);

    free(family->mom.name);

    for (int i = 0; i < family->numChildren; i++) {
        free(family->children[i]->name);
        free(family->children[i]);
    }
}

int main() {
	printf("Exe_7:\n=========\n");

    Family family;
    readFamily(&family);
    printf("\nFamily details:\n");
    printFamily(&family);
    freeFamily(&family);

	return 0;
}





/*
    int* arr = (int*)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr = (int*)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);

Q1

    int arr1[] = { 1, 8, 2 };
    int arr2[] = { 9, 2, 6, 7 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize;
    int* mergedArray = mergeArrays(arr1, size1, arr2, size2, &mergedSize);
    if (mergedArray == NULL) {
        return 1;
    }
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    free(mergedArray);
    int* mergeArrays(const int arr1[], int size1, const int arr2[], int size2, int* mergedSize) {
    *mergedSize = size1 + size2;

    int* mergedArray = (int*)malloc(*mergedSize * sizeof(int));
    if (mergedArray == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }
    return mergedArray;
}

Q2



Q3

char* MyStrdup(const char* str) {
    if (str == NULL) {
        return NULL;
    }
    size_t len = strlen(str) + 1;
    char* newStr = (char*)malloc(len);
    if (newStr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    strcpy(newStr, str);
    return newStr;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#define TAXES 0.17

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	printf("SandBox:\n=========\n");
	int arr1[] = { 1, 2, 3 }, arr2[3];
	for (int i = 0; i < 3; i++) {
		arr2[i] = arr1[i];
	}
	printf("%d\n%d\n%d", arr2[0], arr2[1], arr2[2]);
}

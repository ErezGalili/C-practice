#define _CRT_SECURE_NO_WARNINGS
#define TAXES 0.17


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

#include <stdio.h>

void incrementStaticVar() {
    static int x = 0; // משתנה סטטי פנימי
    x++;
    printf("Value of x: %d\n", x);
}

void resetStaticVar() {
    static int x = 0; // גישה לאותו משתנה סטטי
    x = 0;
    printf("Static variable reset to 0.\n");
}

int main() {
    incrementStaticVar(); // Output: Value of x: 1
    incrementStaticVar(); // Output: Value of x: 2
    resetStaticVar();     // Output: Static variable reset to 0.
    incrementStaticVar(); // Output: Value of x: 1
    return 0;
}



//void main() {
//	printf("SandBox:\n=========\n");
//
//}

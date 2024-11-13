//int num1, num2, res;
// //printf("please enter numbers: ");
//scanf("%d%d", &num1, &num2);
//res = adding(num1, num2);
//printf("%d\n", res);

//return 0;

//int adding(int num1, int num2 ) 
//{
//        //int sum = 0;
//
//        //if (num1 > num2) {
//        //    int temp = num1;
//        //    num1 = num2;
//        //    num2 = temp;
//        //}
//
//        //for (int i = num1; i <= num2; i++)
//        //{
//        //    sum += i;
//        //}
//        //return sum;
//}



// משימה שלוש

//int is_homogeneous(int N) {
//    int age, maxAge, minAge;
//
//    for (int i = 0; i < N; i++) {
//        printf("Enter the age of student %d: ", i + 1);
//        scanf("%d", &age);
//
//        if (i == 0) {
//            maxAge = minAge = age;
//        }
//        else {
//            if (age > maxAge) {
//                maxAge = age;
//            }
//            if (age < minAge) {
//                minAge = age;
//            }
	//    if (maxAge - minAge > 3) {
	//        return 0;
//        }
//    }
//    }
//
//    return 1;
//}
//
//int main()
//{
//    int N;
//
//    printf("Enter Number of Student: ");
//    scanf("%d", &N);
//
//    if (is_homogeneous(N)) {
//        printf("The group is homogeneous\n");
//    }
//    else {
//        printf("The group is heterogeneous\n");
//    }
//
//    return 0;
//}


//q4

//int addOver(int N, int M) {
//    int tempNum, maxNum = 1, secNum = 1;
//
//    for (int i = 0; i < N; i++) {
//        printf("Enter number: ");
//        scanf("%d", &tempNum);
//
//        if (tempNum > maxNum) {
//            secNum = maxNum;
//            maxNum = tempNum;
//        }
//        else if (tempNum > secNum) {
//            secNum = tempNum;
//        }
//    }
//
//    if (maxNum + secNum > M) {
//        return 1;
//    }
//
//    return 0;
//}
//
//int main()
//{
//    int N, M;
//
//    printf("Enter N and M: ");
//    scanf("%d%d", &N, &M);
//
//    if (addOver(N, M)) {
//        printf("The sum is larger than M\n");
//    }
//    else {
//        printf("The sum is not larger than M\n");
//    }
//
//    return 0;
//}

// Exe_7 

//int timeInDay()
//{
//    int total_seconds, hours, minutes, seconds;
//
//    printf("Enter the number of seconds since the start of the day: ");
//    scanf("%d", &total_seconds);
//
//    if (total_seconds < 0 || total_seconds >= 86400) {
//        printf("Error: The number of seconds must be between 0 and 86400.\n");
//        return 1;
//    }
//
//    hours = total_seconds / 3600;
//    minutes = (total_seconds % 3600) / 60;
//    seconds = total_seconds % 60;
//
//    printf("The time is: %d:%d:%d\n", hours, minutes, seconds);
//
//    return 0;
//}
// Exe_10

//int ser() {
//    int fNum, mNum, rNum, num;
//    printf("Enter  numbers: ");
//    scanf("%d%d%d", &fNum, &mNum, &rNum);
//
//    num = fNum;
//
//    for (int i = 0; i < rNum; i++)
//    {
//        printf("%d\n", num);
//        num = num * mNum;
//    }
//    return 0;
//}

// Exe 12

//int processAndPrintNumbers() {
//    int iNum;
//
//    printf("Enter a number (1 < a < 18): ");
//    scanf("%d", &iNum);
//
//    if (iNum <= 1 || iNum >= 18) {
//        printf("Invalid input. The number must be between 2 and 17.\n");
//        return;
//    }
//
//    for (int i = 10; i <= 99; i++) {
//        int tens = i / 10;
//        int ones = i % 10;
//
//        if (tens + ones == iNum) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    printf("Exe_1:\n=========\n");
//    processAndPrintNumbers();
//    return 0;
//}
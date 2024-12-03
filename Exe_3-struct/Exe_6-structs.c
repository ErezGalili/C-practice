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
	float x;
	float y;
} Dot_t;

typedef struct {
	Dot_t tl;
	Dot_t br;
} Squre_t;

int isInXnY(Squre_t s, Dot_t d) {
	return (d.x >= s.tl.x && d.x <= s.br.x && d.y >= s.br.y && d.y <= s.tl.y);
}


int main() {
	printf("Exe_6:\n=========\n");

	Squre_t squre = {
		{-15, 15},
		{15,-15}
	};
	Dot_t dot = { 12,3 };
	printf("%d", isInXnY(squre, dot));

	return 0;
}




/*
struct Date {
	int day;
	int month;
	int year;
};
	struct Date d;
	d.day = 26;
	d.month = 11;
	d.year = 1998;
	printf("My birthday is %d/%d/%d", d.day, d.month, d.year);

	struct Student {
	char name[6];
	float age;
	long ID;
} typedef student_t;
	student_t s1 = { "Haim", 34.5, 289558561 };
	printf("s1... %s.%f.%u\n", s1.name, s1.age, s1.ID);
	student_t s2, s3;
	s2 = s1; strcpy(s1.name, "Yosef");
	printf("s1 Name = Yosef... %s.%f.%u\n", s1.name, s1.age, s1.ID);
	printf("s2 = s1... %s.%f.%u\n", s2.name, s2.age, s2.ID);

	s1.age = 12;
	printf("age = 12... %s.%f.%u\n", s1.name, s1.age, s1.ID);
	s1.ID = 345656234;
	printf("s.ID... %s.%f.%u\n", s1.name, s1.age, s1.ID);

	//Q1

	printf("The best student ID is: %d", returnBestStudent(students, 3));
	struct Student {
	char name[20];
	float avgGrades;
	int ID;
} typedef Student_t;

Student_t students[3] = {
	{"Alice", 85.5, 1},
	{"Bob", 90.0, 2},
	{"Charlie", 78.5, 3}
};

int returnBestStudent(const Student_t* students, int size) {
	float score = 0;
	int bestStudentID = 0;
	for (int i = 0; i < size; i++) {
		if (students[i].avgGrades > score) {
			score = students[i].avgGrades;
			bestStudentID = students[i].ID;
		}
	}
	return bestStudentID;
}

Q2

	MyTime_t t1 = { 10, 45, 30 };
	MyTime_t t2 = { 8, 50, 45 };
	MyTime_t diff = DiffTime(t1, t2);
	printf("The time diffrence is: %02d:%02d:%02d", diff.hours, diff.minutes, diff.seconds);
typedef struct {
	int hours;
	int minutes;
	int seconds;
} MyTime_t;
MyTime_t DiffTime(MyTime_t t1, MyTime_t t2) {
	MyTime_t diff = { 0, 0, 0 };
	diff.seconds = t1.seconds - t2.seconds;
	if (diff.seconds < 0) {
		diff.seconds += 60;
		t1.minutes--;
	}
	diff.minutes = t1.minutes - t2.minutes;
	if (diff.minutes < 0) {
		diff.minutes += 60;
		t1.hours--;
	}
	diff.hours = t1.hours - t2.hours;
	return diff;
}

Q3



Q4

	MyTime_t t1 = { 10, 45, 30 };
	MyTime_t t2 = { 8, 50, 45 };
	MyTime_t diffTime;
	DiffTime(&t1, &t2, &diffTime);
	printf("The time diffrence is %02d:%02d:%02d", diffTime.hours, diffTime.minutes, diffTime.seconds);
typedef struct {
	int hours;
	int minutes;
	int seconds;
} MyTime_t;
void DiffTime(MyTime_t* t1, MyTime_t* t2, MyTime_t* diffTime) {
	diffTime->seconds = t1->seconds - t2->seconds;
	if (diffTime->seconds < 0) {
		diffTime->seconds += 60;
		t1->minutes--;
	}
	diffTime->minutes = t1->minutes - t2->minutes;
	if (diffTime->minutes < 0) {
		diffTime->minutes += 60;
		t1->hours--;
	}
	diffTime->hours = t1->hours - t2->hours;
}
*/
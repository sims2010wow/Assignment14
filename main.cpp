#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void display(void);
float input(int);
int choice(void);

int main(void) {
	float num1,num2;
	int will1;
	display();
	num1 = input(1);
	printf("\n\n");
	num2 = input(2);
	will1 = choice();
	system("pause");
}
int choice(void) {
	int choice;
	printf("\n\nSelect operation to preform on two numbers entered.\n\n\
1)Addition\n\n2)Subtraction\n\n3)Multiplication\n\n4)Division\n\n\
Enter interger values for choice (1,2,3,4): ");
	scanf(" %d", &choice);
	while (1) {
		if (choice != 1 || choice != 2 || choice != 3 || choice != 4) {
			printf("ERROR: You must enter 1, 2, 3 or 4!\n\n\
please try again: ");
			scanf(" %d", &choice);
		}
		else break;
	}
	return choice;
}

float input(int i) {
	float out;
	printf("enter a value for number %d: ", i);
	scanf("%f", &out);
	return(out);
}

void display(void) {
	printf("Group L01. Austin, Valeria, Gabby. Assignment 14. 4/5/18.\nThe purpose of this program is to\
 analyze data with functions.\n\n");
} 

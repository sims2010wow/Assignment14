#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void display(void);
float input(int);
int choice(void);
void math(int will1,float num1,float num2);

int main(void) {
	float num1,num2;
	int will1;
	char will2;
	display();
	num1 = input(1);
	printf("\n\n");
	num2 = input(2);
	do {
		will1 = choice();
		math(will1, num1, num2);
		printf("\nWould you like to use these numbers again (y/n)? ");
		scanf(" %c", &will2);
	} while(will2 == 'y');
	system("pause");
}

void math(int will1, float num1, float num2) {
	char will2;

		switch (will1) {
		case 1:
			printf("The sum %0.2f+%0.2f=%0.2f\n", num1, num2, num1 + num2);
			break;
		case 2:
			printf("The difference %0.2f-%0.2f=%0.2f\n", num1, num2, num1 - num2);
			break;
		case 3:
			printf("The product %0.2f*%0.2f=%0.2f\n", num1, num2, num1 * num2);
			break;
		case 4:
			printf("The quotient %0.2f/%0.2f=%0.2f\n", num1, num2, num1 / num2);
			break;
		}
}


int choice(void) {
	int choice;
	printf("\n\nSelect operation to preform on two numbers entered.\n\n\
1)Addition\n\n2)Subtraction\n\n3)Multiplication\n\n4)Division\n\n\
Enter interger values for choice (1,2,3,4): ");
	scanf(" %d", &choice);
	while (1) {
		if (choice>4 || choice<1) {
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

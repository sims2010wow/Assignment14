#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void display(void);
float input(int);
int choice(void);
float math(int will1,float num1,float num2);
void file(int will1, float num1, float num2, float result);

int main(void) {
	float num1,num2,result;
	int will1;
	char will2,will3;
	//create file to append to later
	FILE *pointer;
	pointer = fopen("results.txt", "w");
	fclose(pointer);
	//display header
	display();


	//loop function 2-5
	do {

		//accept inputs
		num1 = input(1);
		printf("\n\n");
		num2 = input(2);

		//compute operation of choice and loop functions 3-5
		do {
			will1 = choice();        //choice function
			result = math(will1, num1, num2);           //operation function
			file(will1, num1, num2, result);                              //append results to external vile
			printf("\nWould you like to use these numbers again (y/n)? ");                                 //loop?
			scanf(" %c", &will2);
			will2=toupper(will2);
			printf("%c", will2);
		} while (will2 == 'Y');

		printf("\nWould you like to use different numbers (y/n)? ");                                 
		scanf(" %c", &will3);
		will3=toupper(will3);
	} while (will3 == 'Y');
	
}

//function 5
void file(int will1, float num1, float num2, float result) {
	char choice[10];
	switch (will1) {
	case 1: 
		strcpy(choice, "add");
		printf("The sum %0.2f+%0.2f=%0.2f\n", num1, num2, result);
		break;
	case 2:
		strcpy(choice, "subtract");
		printf("The difference %0.2f-%0.2f=%0.2f\n", num1, num2, result);
		break;
	case 3:
		strcpy(choice, "multiply");
		printf("The product %0.2f*%0.2f=%0.2f\n", num1, num2, result);
		break;
	case 4:
		strcpy(choice, "divide");
		printf("The quotient %0.2f/%0.2f=%0.2f\n", num1, num2, result);
		break;
	}
	FILE *pointer;
	pointer = fopen("results.txt", "a");
	fprintf(pointer,"%s %0.2f and %0.2f result %0.2f\n",choice,num1,num2,result);
	fclose(pointer);

	//printf("%s %0.2f and %0.2f result %0.2f\n", choice, num1, num2, result);
}

//function 4
float math(int will1, float num1, float num2) {
	char will2;
	float result;

		switch (will1) {
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			break;
		}
		return result;
}

//function 3
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

//function 2
float input(int i) {
	float out;
	printf("enter a value for number %d: ", i);
	scanf("%f", &out);
	return(out);
}

//function 1
void display(void) {
	printf("Group L01. Austin, Valeria, Gabby. Assignment 14. 4/5/18.\nThe purpose of this program is to\
 analyze data with functions.\n\n");
} 
} 

// Lawton Crooks
// 02/14/2025
// CPSC 1011 002
// Lab #5
// This program is a modification of the code from lab 4, which calculates bmi. The modification includes conditional statements to tell the user if their weight is considered underweight, healthy, overweight or obese according to their bmi.

#include <stdio.h>
#include <math.h>

int main(void) {
	int weight, height, choice;
	printf("\n\n\t\tbmi Calculator");
	printf("\n\nBody Mass Index (bmi) is a ratio of weight to height.\nKeep in mind that muscle weighs more than fat, so bmi is\nnot always the best metric of a healthy weight.");

	do
	{	
		printf("\n\nEnter your weight in pounds (as an integer): ");
		scanf("%d", &weight);
		printf("Enter your height in inches (as an integer): ");
		scanf("%d", &height);

		int bmi = (weight * 703)/(height*height);

		printf("\nYour bmi is %d.\n\n", bmi);

		if (bmi < 19) {
			printf("According to your bmi, your weight of %d lbs is considered underweight", weight);
		}
		else if ((bmi >= 19) && (bmi <=24)) {
			printf("According to your bmi, your weight of %d lbs is a healthy weight", weight);
		}
		else if ((bmi >=25) && (bmi <= 29)) {
			printf("According to your bmi, your weight of %d lbs is considered overweight", weight);
		}
		else {
			printf("According to your bmi, your weight of %d lbs is considered obese", weight);
		}


		printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

		printf("\n\nEnter 1 to go again or 0 to quit: ");
		scanf("%d", &choice);

		while ((choice != 1) && (choice != 0))
		{	
			printf("Enter 1 to go again or 0 to quit: ");
			scanf("%d", &choice);
		}


	}while (choice == 1);


	return 0;

}


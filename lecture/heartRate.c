#include <stdio.h>

int main() {
do{ 
	int pulse, restHeartRate, goAgain;

	printf("\n\nTake your resting pulse for 10 seconds.\n");
	printf("Enter your pulse rate:  ");
	scanf("%i", &pulse);

	restHeartRate = pulse * 6;

	printf("\n\nYour resting heart rate is %d. \n", restHeartRate);

	printf("\nTry again? \n1 for yes, 0 for no:  ");
	scanf("%d", &goAgain);

}while(goAgain == 1);

	return 0;

}

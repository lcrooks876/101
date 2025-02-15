/* In SC, the number of points a driver receives for a speeding 
	ticket depends on how much they exceed the speed limit:

	10 mph or less over the limit:  2 points
	11-25 mph over the limit: 		  4 points
	26 mph or more over the limit:  6 points

	Write a program that asks the user to enter an integer for how
	much over the speed limit they were driving.

	Then use an if statement to print a message for how many points
	on their license that would be if they were to get a speeding 
	ticket.

	The message could say something like:
	"That much over the speed limit would result in X points" 
	replacing the X with the number of points.

*/

#include <stdio.h>

int main() {
	int mph, pts;

	printf("\n\nPoints on your drivers license with a speeding ticket.\n");
	printf("How much over the speed limit were you driving? ");
	scanf("%d", &mph);
	
	if (mph <= 10) {
		pts = 2;
		printf("\n\nYou were going %d mph over the speed limit.\nThis results in %d points.\n\n", mph, pts);
	}
	else if ((mph > 10) && (mph >= 25)) {
		pts = 4;
		printf("\n\nYou were going %d mph over the speed limit.\nThis results in %d points.\n\n", mph, pts);
	}
	else	{
		pts = 6;
		printf("\n\nYou were going %d mph over the speed limit.\nThis results in %d points.\n\n", mph, pts);
	}
	return 0;
}

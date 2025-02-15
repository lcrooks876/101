/* Program that reports the contents of a compressed-gas cylinder 
	based on the first letter of the cylinder's color.  The program
	input is a character represeting the observed color of the 
	cylinder:  'Y' or 'y' for yellow, 'O' or 'o' for orange, etc.

	orange	ammonia
	brown		carbon monoxide
	yellow	hydrogen
	green		oxygen

	This program uses an if statement to print the appropriate
	contents for the letter entered by the user.  
*/

#include <stdio.h>

int main() {
	char color;

	printf("\n\nWhat color is the compressed-gas cylinder? ");
	scanf("%c", &color);

	printf("That cylinder contains: ");

	if (color == 'O' || color == 'o')
		printf("ammonia\n\n");
	else if (color == 'B' || color == 'b')
		printf("carbon monoxide\n\n");
	else if (color == 'Y' || color == 'y')
		printf("hydrogen\n\n");
	else if (color == 'G' || color == 'g')
		printf("oxygen\n\n");
	else
		printf("Contents unknown\n\n");

	return 0;
}

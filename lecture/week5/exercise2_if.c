/*	Program that asks user to enter a serial number for a ship
	and then displays the type of ship based on the first
	character of the serial number.  This program uses an if
	statement.

	* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	Two sample outputs are shown below.  The serial numbers are 
	one entered by the user:

	Enter ship serial number:  f3456
	Ship class is f:  Frigate

	Enter ship serial number:  P210
	Ship class is P:  Unknown

	* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
	The classes of the ships are:
	B or b  -> Battleship
	C or c  -> Cruiser
	D or d  -> Destroyer
	F or f  -> Frigate
	anything else  -> Unknown

	NOTE:  When the user enters the serial number, a scanf is used 
	to read in a character - the first character entered by the 
	user will be stored in that variable.  The scanf ignores the 
	rest of the serial number that the user enters.

*/

#include <stdio.h>

int main() {
	char class;

	printf("\n\nEnter ship serial number: ");
	scanf("%c", &class);
	printf("Ship class is %c: ", class);

	if (class == 'B' || class == 'b')
		printf("Battleship\n\n");
	else if (class == 'C' || class == 'c')
		printf("Cruiser\n\n");
	else if (class == 'D' || class == 'd')
		printf("Destroyer\n\n");
	else if (class == 'F' || class == 'f')
		printf("Frigate\n\n");
	else
		printf("Unknown\n\n");
	

	return 0;
}

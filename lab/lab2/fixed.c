/* errors.c
        Lawton Crooks
        CpSc 1011, Section 002 , Spring 2025
        Due 1/24/25
        Part 2 of Lab #2
        Fixing the errors in the file.
*/

#include "stdio.h"

int main(void) {

        // compute result
        int sum = 5 + 25 * 2;

        // display results
        printf("The answer is %i\n", sum);

        return 0;
}

/* The following fixes were done to the errors.c file:
 *
 * 	- inserted '(void)' next to main
 * 	- fixed commenting error where there should have been runnable code
 * 	- fixed int error by putting the variable and formula in front of 'int'
 * 	- deleted 'INT sum'
 * 	- fixed quotations in printf
 * 	- suppressed sum variable (;)
 * 
 * If you have any questions, please do not hesitate to contact me! (803-338-1230) lcrooks@clemson.edu
 *
 */ 

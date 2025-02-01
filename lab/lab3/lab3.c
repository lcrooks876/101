// Lawton Crooks
// CpSc 1011, Lab Section 002, Spring 2025
// 01/30/25
// Lab #3
// Practice using <math.h>, sqrt(), fprintf, etc...

#include <stdio.h>
#include <math.h>

int main() {
	int A;

	fprintf(stderr, "\nEnter any character from the keyboard: ");
	scanf("%lc",&A);
	
	printf("\nThe decimal value of %c is: %d", A, A);
	
	double Sqrt_A = sqrtf(A);
	printf("\n\nThe square root of %d is: %0.1f", A, Sqrt_A);

	printf("\n\nPI printed to %d decimal places is: %.*f\n\n", (int)Sqrt_A, (int)Sqrt_A, M_PI);

	return 0;

}

	

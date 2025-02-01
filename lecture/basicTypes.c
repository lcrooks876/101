#include <stdio.h>

int main()  {
   int     x, y;
   char    a;
   float   f, e;
   double  d;

   x = 4;
   y = 7;
   a = 'b';
   f = -3.4;
   e = 54.123456789;
   d = 54.123456789;

   printf("\nx and y are ints: %d %d\n", x, y);
   printf("a is a character: %c \n", a);
   printf("f and e are floats %f %f\n", f, e);
   printf("d is a double %lf\n\n", d);

	// limit decimal places shown
   printf("e to 4 decimal places is %.4f\n", e);
   printf("d to 4 decimal places is %.4lf\n", d);
  
   printf("f and e to 9 decimal places are %.9f  "
          "and %.9f\n", f, e);
   printf("d to 9 decimal places is %.9lf \n", d);

	printf("\n%i divided by %i is: %i\n", x, y, x/y);
	printf("%i divided by %i is: %i\n", y, x, y/x);

	// type casting
	printf("%i divided by %i is: %.2f\n", y, x, y/(float)x);
	// sizeof operator
	// increment and decrement operators
	// printf & scanf
	// fprintf & fscanf
	// stdin, stdout, stderr


   return 0;
}


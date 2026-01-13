#include <stdio.h>
#include <math.h>

int main (int argc, int **argv)

{
	
	system ("chcp 1253");  // Set encoding (remove if running on Linux)
	printf ("====================================\n"); // Declaration of variables
	int x, y;
	int add, sub, multi, div1, mod;
	float div2;
	int pow; 
	float root; 
	printf ("====================================\n"); // Input of two integers from standard input
	printf ("Enter the 1st integer: ");
	scanf ("%d", &x);
	printf ("Enter the 2nd integer: ");
	scanf ("%d", &y);
	printf ("====================================\n"); // Calculation of sum, difference, product, quotient, remainder
	add = x + y;
	sub = x - y;
	multi = x * y;
	div1 = x / y;
	mod = x % y;
	printf ("Sum       :  %d\n", add);
	printf ("Difference:  %d\n", sub);
	printf ("Product   :  %d\n", multi); 
	printf ("Quotient  :  %d\n", div1);
	printf ("Remainder :  %d\n", mod);
	printf ("====================================\n"); // Calculation of real quotient
	div2 = (float) x / y;
	printf ("Real quotient: %f\n", div2);
	printf ("====================================\n"); // Calculation of the square of x and the square root of y
	pow = x * x;
	root = sqrt ((float) y);
	printf ("Square of x       : %d\n", pow);
	printf ("Square root of y  : %f\n", root);
	printf ("====================================\n");
	printf ("====================================\n");
	return 0;

}

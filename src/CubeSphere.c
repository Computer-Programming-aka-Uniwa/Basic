#include <stdio.h>
#define pi 3.14159

int main (int argc, int **argv)

{
	system ("chcp 1253");  // Set encoding (remove if running on Linux)
	printf ("====================================\n"); // Declaration of variables
	double a;
	double area_cube, vol_cube;
	double r;
	double area_sphere, vol_sphere;
	
	printf ("====================================\n"); // Input the edge length of the cube in meters from standard input
	printf ("Edge length of the cube in meters: ");
	scanf ("%lf", &a);
	
	printf ("====================================\n"); // Calculation of the area and volume of the cube
	area_cube = 6 * (a * a);
	vol_cube = a * a * a;
	printf ("Surface area of the cube : %lf\n", area_cube);
	printf ("Volume of the cube       : %lf\n", vol_cube);
	
	printf ("====================================\n"); // Assign the same value of the cube's edge length to the radius of the sphere
	r =  a;
	printf ("Radius of the sphere in meters: %f\n", r);
	
	printf ("====================================\n"); // Calculation of the surface area and volume of the sphere
	area_sphere = 4 * pi * (r * r);
	vol_sphere = (float) 4 / 3 * pi * (r * r * r);
	printf ("Surface area of the sphere : %lf\n", area_sphere);
	printf ("Volume of the sphere       : %lf\n", vol_sphere);
	
	printf ("====================================\n");
	printf ("====================================\n");
	return 0;
}

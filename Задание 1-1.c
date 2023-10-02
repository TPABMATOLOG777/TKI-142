#include <stdio.h>
#include <math.h>

double afunc(double x, double y, double z)
{
	return (sin(x) / sqrt(pow(y, 2)) + pow(sin(x), 2));
}

double bfunc(double x, double y, double z)
{
	return (exp(-z * x) + sqrt(x + 1) + exp(-y * x));
}

int main()
{
	const double x = 1.7;
	const double y = 1.08;
	const double z = 0.5;
	double a = afunc(x, y, z);
	double b = bfunc(x, y, z);
	printf("a = % f\n", a);
	printf("b = % f\n", b);
	return 0;
}

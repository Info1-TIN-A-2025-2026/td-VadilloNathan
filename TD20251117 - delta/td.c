#include <stdio.h>

double delta(const double a, const double b, const double c);		//Prototipe de la fonction

int main(int argc, const char *argv[])
{
	double a = 0;
	double b = 0;
	double c = 0;
	printf("a:");
	scanf("%lf", &a);
	printf("b:");
	scanf("%lf", &b);
	printf("c:");
	scanf("%lf", &c);

	double d = 0;
	d = delta(a, b, c);

	printf("%lf\n", d);

	return 0;
}

double delta(const double a, const double b, const double c)
{
	double delta = b * b - 4. * a * c;
	return delta;
}

// double r = 1/2;  r = 0
// double r = 1./2.;  r = 0.567

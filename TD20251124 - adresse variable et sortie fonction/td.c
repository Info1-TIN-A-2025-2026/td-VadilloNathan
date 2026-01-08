#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// int f(unsigned int t, int *a, int *b, int *c); // signifie que a contient l'adresse d'une variable de type int

// int main(int argc, const char *argv[])
// {
//  	int h = 0;
//  	int m = 0;
//  	int s = 0;

// 	printf("h= %p\n", &h); //%p pour afficher l'adresse
//  	printf("m= %p\n", &m);
//  	printf("s= %p\n", &s);

// 	int i = f(1, &h, &m, &s);

// 	return 0;
// }

// int f(unsigned int t, int *a, int *b, int *c)  // b contient l'adresse de m (mais b a sa propre adresse)
// {
// 	printf("a= %p\n", a); //%p pour afficher l'adresse
// 	printf("b= %p\n", b);
// 	printf("c= %p\n", c);

// 	*a = t/3600;	// à l'adresse stockée dans a, je met la valeur 16

// 	*b = t / 60 - *a * 60;  // *a c'est la valeur qui est en a

// 	*c = t - *b * 60 - *a * 3600;

// 	return 0;
// }

int f(double x, double y, double *rho, double *theta);

int main(int argc, const char *argv[])
{
	double m = 0;
	double s = 0;

	printf("m= %p\n", &m);
	printf("s= %p\n", &s);

	int i = f(1, 2, &m, &s);

	return 0;
}

int f(double x, double y, double *rho, double *theta)
{
	*theta = atan2(y, x);
	*rho = sqrt(x * x + y * y);

	return 0;
}
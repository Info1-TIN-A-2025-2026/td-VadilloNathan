#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, const char *argv[])
{
	// int nrb_raw = atoi(argv[1]);

	// if (nrb_raw % 2 ==0)
	// {
	// 	puts("Paire");
	// 	return 1;
	// }

	// if (nrb_raw < 0)
	// {
	// 	puts("To small");
	// 	return 1;
	// }


	// int p = 0;
	// int q = nrb_raw + 1;

	// printf("%*s\n",q,"*");

	// for (int i = 0; i < nrb_raw; i++)
	// {
	// 	p = p + 2;
	// 	q = q - 1;
	// 	printf("%*s",q,"o");
	// 	for (int z = 0; z < p; z++)
	// 	{
	// 		printf("o");
	// 	}
	// 	puts("");
	// }

	// printf("%*s\n", nrb_raw + 1, "|");
	// printf("%*s\n", nrb_raw + 3, "__|__");
	// puts("");

	// return 0;

	double Pn = 0;
	int n = 0;
	double a = 0;
	double f = 0;
	double p = 0;

	do
	{
		f = (pow(-1, n)) / (2 * n + 1);
		a = a + f;
		p = a * 4;
		n++;

		printf("%lf\n", p);

	} while ((p - 3.1415 > 0.0001) || (3.1415 - p > 0.0001));

	printf("%d\n", n);
}

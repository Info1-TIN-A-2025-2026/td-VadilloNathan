#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	/*int a = 0;
	int b = 0;
	int q = 0;
	int r = 0;

	printf("enter a: ");
	scanf("%d", &a);

	printf("enter b: ");
	scanf("%d", &b);

	q = a / b;
	r = a % b;

	printf("a/b = %d\n", q);
	printf("a%%b = %d\n", r);   // %% car sinon il croit que c'est un format*/

	/*int a = 10;

	printf("%d", a++);

	a = 10;
	printf("%d", ++a);*/

	for (unsigned int i = 2; i <= 100; i++)
	{
		bool is_prime = true;
		for (unsigned int z = 2; z <= sqrt(i); z++)
		{
			if (i%z == 0)
				is_prime = false;
		}

		if (is_prime == true)
			printf("%d\n", i);
	}
		return 0;
}

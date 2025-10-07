#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	float x = 0.f;
	float y = 0.f;

	int ret = 0;

	// printf("enter a floating point value: ");
	// ret = scanf("%f", &x); // &x = adresse of varialbe x

	// printf("x = %.4f\n", x);
	// printf("ret = %d\n", ret);

	// printf("enter a floating point value: ");
	// ret = scanf("%f", &y); // &x = adresse of varialbe x

	// printf("x = %.4f\n", y);
	// printf("ret = %d\n", ret);

	// printf("enter 2 floating points values (space separated) ");
	// ret = scanf("%f %f", &x, &y);
	// printf("ret = %d\n", ret);
	// printf("x = %.4f\n",x);
	// printf("y = %.4f\n",y);

	printf("enter 2 floating points values (: separated) ");
	ret = scanf("%f:%f", &x, &y); // important que %f soit du même type que &x sinon ca peut effacer des autre variables
	printf("ret = %d\n", ret);
	printf("x = %.4f\n",x);
	printf("y = %.4f\n",y);
	
}
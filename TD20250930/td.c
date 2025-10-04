#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Enter mass 1 [Tonnes]: ");
	double Mass1 = 0;
	scanf("%lf", &Mass1); 

	printf("Enter mass 2 [Tonnes]: ");
	double Mass2 = 0;
	scanf("%lf", &Mass2); 

	printf("Enter distance [Kilometer]: ");
	double Distance = 0;
	scanf("%lf", &Distance); 

	if(Mass1 < 0 || Mass2 < 0 || Distance < 0)
		{
			puts("Error");
		}
		
	else
		{
			const double G = 6.67e-11;

			double Force = G * Mass1 * Mass2 / (Distance*Distance);

			printf("%.3g", Force);
		}

	

}
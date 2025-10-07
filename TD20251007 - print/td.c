#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	long volume = 42; 

	printf("volume = [%ld]\n", volume);
	printf("volume = [%7ld]\n", volume);  // 7 caractères de large, aligné à droite
	printf("volume = [%-7ld]\n", volume); // 7 caractères de large, aligné à gauche
	printf("volume = [%+ld]\n", volume); // toujours afficher le signe
	printf("volume = [%+7ld]\n", volume); // 7 caractères de large, toujours afficher le signe

	long pression = -4;

	printf("pression = [%ld]\n", pression);


	double pi = 3.141592653589793;

	printf("pi = [%lf] \n", pi);  // 6 digits après la virgule par défaut
	printf("pi = [%.2lf] \n", pi); 
	printf("pi = [%+.2lf] \n", pi);

	double absolute_zero = -459.67;
	printf("absolute_zero = [%.1lf] \n", absolute_zero);

	printf("[%+10.2lf] \n", pi);
	printf("[%+10.2lf] \n", absolute_zero);  // si le nombre est trop grand, le format est ignoré

	int num_digit = 3;   // %.3lf

	printf("pi = [%.3lf] \n", pi);
	printf("pi = [%.*lf] \n", num_digit, pi);

	num_digit = 12;
	printf("pi = [%.*lf] \n", num_digit, pi);

	int with = 8;
	num_digit = 3;
	printf("pi = [%+*.*lf] \n", with, num_digit, pi);
}

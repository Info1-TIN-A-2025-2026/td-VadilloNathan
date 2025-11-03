#include <stdio.h>

int main(int argc, const char *argv[])
{
	/*int n = atoi(argv[1]);
	unsigned int w = 0;

	if (n > 0)
	{
		while(n>=1)
		{
			n = n / 10;
			w++;
		}
		printf("%u\n", w);
	}
	else
		printf("valeur négative ou égale à 0 !\n");*/


	int n = atoi(argv[1]);
	unsigned int w = 0;


	do 
	{
		w = w * 10;
		w += n % 10;
		n = n/10;
	} while (n != 0);

	printf("%u\n", w);
}
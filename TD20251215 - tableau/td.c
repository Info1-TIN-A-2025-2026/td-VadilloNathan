#include <stdio.h>
#include <stdlib.h>

#define n  1000


int main(int argc, const char *argv[])
{
	srand(0);

	double k = 93;
	long tableau [n];

	for (int i = 0; i < n; i++)
	{
		tableau[i] = (rand() % (200+1)) - 100;
		
	}
	
	for(int z = 0; z < n;z++)
	{
		if(tableau[z] == k)
		{
			printf("%d\n", z);
			return 0;
		}
	}

	
	return 0;
		
}

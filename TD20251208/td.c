#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, const char *argv[])
{
	srand(time(NULL)); //initialiser la seed du generateur aléatoire  par un nombre qui change toute les secondes

	for (int i = 0; i < 5; i++)
		printf("%d\n", rand()); //0..RAND_MAX
}
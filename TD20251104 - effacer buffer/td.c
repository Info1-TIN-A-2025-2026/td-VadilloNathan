#include <stdio.h>

int main(int argc, const char *argv[])
{
	const int I_MIN = 10;
	const int I_MAX = 20;
	int i = 0;

	do
	{
		int ret = 0;
		printf("Enter a interger value in range [%d...%d]", I_MIN, I_MAX);
		ret = scanf("%d", &i);
		if (ret != 1)
		{
			// char w = 0;
			// do
			// {
			// 	w = getchar();	//effacer 1 carractère du buffer clavier si on entre des lettres
			// } while (w != '\n');
			while (getchar() != '\n');
		}

	} while (i < I_MIN || i > I_MAX);

	printf("i=%d\n", i);
}


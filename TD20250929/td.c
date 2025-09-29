#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Number of seconds:");
	int s = 0;
	scanf("%d", &s); //%d car singé int, &la ou il est en mémoir

	if (s < 0)
	{
		puts("Error"); // puts = printf et va a la ligne. plus rapide que printf, utilisé seulement pour les petit messages
	}
	else if (s >= 86400)
	{
		puts("Overflow");
	}
	else
	{
		unsigned int hours = 0;
		unsigned int minutes = 0;
		unsigned int seconds = 0;

		hours = s / 3600;
		minutes = s / 60 - hours * 60;
		seconds = s - (minutes * 60) - (hours * 3600);
		printf("%02u:%02u:%02u\n", hours, minutes, seconds); //%u car unsigned int | %02 car 2 digit et si pas de chiffre mettre un 0
	}
}
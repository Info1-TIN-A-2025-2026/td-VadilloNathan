#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(char *t);

int main(int argc, const char *argv[])
{

	char S1[] = "TXT";

	printf("memory size = %ld\n", sizeof(S1));
	printf("num size = %ld\n", sizeof(S1)/sizeof(char));

	unsigned long count = 0;

	while(S1[count] != 0)
	{
		count++;
	}
	printf("string length = %lu\n", count);
	printf("string length = %lu\n", strlen(S1));

	char S2[100] = "mot";
	printf("num size = %ld\n", sizeof(S2));
	printf("string length = %lu\n", strlen(S2));

	char *S3 = "pipo"; // autre moyen de déclarer un tableau: adressedu début du tableau dans la case S3
	printf("num size = %ld\n", sizeof(S3));  // donne la taille de l'adresse du tableau donc 8 car c'est la taille d'un char 
	printf("string length = %lu\n", strlen(S3));

	char S4[] = "jjshfkjdhjsjfsjdhsdhdjfhjsj isdh i," \
				"jksenjskdfn slk ks ksk ."\
				"jsbdjsbdjks ks is oè Ie ioau iua";
	printf("num size = %ld\n", sizeof(S4));
	printf("string length = %lu\n", strlen(S4));

	char S5[] = "ABC";
	display(S5);

	char S6[][10] = {"ABC", "DEF", "GHIJKL"}; //3 x 10 bytes(octect) in memory
	char *S7[] = {"ABC", "DEF", "GHIJKL"};	  //3 x sizeof(adresse) = 24 bytes(octect)

	return 0;
}

void display(char *t)
{
	for (int i = 0; i < strlen(t) + 1; i++)
	{
		printf("%3d ", t[i]);
	}
	puts("");
	for (int i = 0; i < strlen(t) + 1; i++)
	{
		printf("%2c  ", t[i]);
	}
}
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int state = 0;

	printf("saisir une des valeur suivante: 0,1,2,4:	");

	scanf("%d", &state);

	switch(state)
	{
		case 0:
			puts("ERROR");
			break;
		case 1:
			puts("ON");
			break;
		case 2:
			puts("OFF");
			break;
		case 4:
			puts("BLINK");
			break;
	}
}
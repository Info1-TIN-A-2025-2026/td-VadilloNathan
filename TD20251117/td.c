// #include <stdio.h>

// void proc(void);		//Prototipe de la fonction

// int main(int argc, const char *argv[])
// {
// 	proc();

// 	return 0;
// }

// void proc(void)
// {
// 	puts("boujour");
// }



#include <stdio.h>

void f1(const int a);		//Prototipe de la fonction

int main(int argc, const char *argv[])
{
	int i = 0;
	scanf("%d", &i);

	f1(i);

	return 0;
}

void f1(const int a)
{
	printf("%d\n", 3 * a);
}
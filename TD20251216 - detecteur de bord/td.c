#include <stdio.h>
#include <stdlib.h>


#define H 16
#define L 16


void fil_f(unsigned char t[H][L]);
void display(unsigned char t[H][L]);
void fil_g(unsigned char t[H][L], unsigned char p[H][L]);

int main(int argc, const char *argv[])
{
	

	unsigned char f [H][L] = {0};
	unsigned char g [H][L] = {0};
	unsigned char r [H][L] = {0};

	fil_f(f);
	display(f);

	fil_g(f, r);
	display(r);

	return 0;
}

void fil_f(unsigned char t[H][L])
{

	for (int i = 4; i < 12; i++)
	{
		for (int z = 4; z < 12; z++)
		{
			t[i][z] = 255;
		}
	}
}

void display(unsigned char t[H][L])
{
	for (int i = 0; i < H; i++)
	{
		for (int z = 0; z < L; z++)
		{
			printf("%4d ", t[i][z]);
		}
		puts("");
	}
	puts("");
}

void fil_g(unsigned char t[H][L], unsigned char p[H][L])
{
	for (int i = 0; i < H; i++)
	{
		for (int z = 0; z < L; z++)
		{
			if(t[i][z] == 255)
			{
				for (int deltaH = -1; deltaH <= 1; deltaH++)
				{
					for (int deltaL = -1; deltaL <= 1; deltaL++)
					{
						p[i+deltaH][z+deltaL] = 255;
					}
				}
			}
			
		}
	}

}

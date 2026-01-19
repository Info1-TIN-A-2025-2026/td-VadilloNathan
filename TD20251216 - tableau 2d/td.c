#include <stdio.h>
#include <stdlib.h>

#define W 4
#define H 4
#define min 0
#define max 255


void fil_matrix(unsigned char t[H][W], int n, int m);
void display(unsigned char t[H][W], int h, int w);

void computehisto(unsigned char t[H][W], unsigned char p[max]);
void displayhisto(unsigned char p[max]);


int main(int argc, const char *argv[])
{
	

	unsigned char tableau [H][W] = {0}; //tableau est en faite l'adresse du début du tableau

	fil_matrix(tableau, min, max); //comme tableau est deja une adresse, pas besoin de &

	//display(tableau, H, W);

	unsigned char cellules[max] = {0}; //bien set a 0, car sinon il peut y avoir des valeurs parasite 

	computehisto(tableau, cellules);
	displayhisto(cellules);

	return 0;
		
}

void fil_matrix(unsigned char t[H][W], int n, int m)
{
	srand(0);

	for (int i = 0; i < H; i++)
	{
		for (int z = 0; z < W; z++)
		{
			t[i][z] = min+rand() % max-min+1;
		}
	}
}

void display(unsigned char t[H][W], int h, int w)
{
	for (int i = 0; i < H; i++)
	{
		for (int z = 0; z < W; z++)
		{
			printf("%4d ", t[i][z]);
		}
		puts("");
	}
}


void computehisto(unsigned char t[H][W], unsigned char p[max])
{
	for (int i = 0; i < H; i++)
	{
		for (int z = 0; z < W; z++)
		{
			p[t[i][z]] += 1;
		}
	}
}

void displayhisto(unsigned char p[max])
{
	for (int i = 0; i < max; i++)
	{
		printf("%d ,", p[i]);
	}
}
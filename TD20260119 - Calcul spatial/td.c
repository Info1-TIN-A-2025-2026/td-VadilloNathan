#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MasseFull 750
#define MasseVide 90
#define Ve 4
#define Consomation 4

int main(int argc, const char *argv[])
{
	int MasseActuel = MasseFull;
	double VitesseActuel = 0;
	int Temps = 0;
	int CarburantConsome = 0;
	double Altitude = 0;

	printf("tps |Masse|      V       |Mcarb| alt km\n");
	printf("____|_____|_m/s__|_km/h__|_____|_______\n");

	while (MasseActuel > MasseVide)
	{
		Temps++;

		MasseActuel -= Consomation;
		CarburantConsome += Consomation;	

		VitesseActuel = Ve * log(MasseFull / (double)MasseActuel);

		Altitude += VitesseActuel;
		
		if (Temps%10 == 0)
		{
			printf("%3d | %3d | %4.lf | %5.lf | %3d | %7.lf\n", Temps, MasseActuel, VitesseActuel*1000,VitesseActuel*3600, CarburantConsome,Altitude);
		}	
	}

	printf("%3d | %3d | %4.lf | %5.lf | %3d | %7.lf\n", Temps, MasseActuel, VitesseActuel*1000,VitesseActuel*3600, CarburantConsome,Altitude);

	return 0;
}


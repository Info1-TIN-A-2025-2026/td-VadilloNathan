#include <stdio.h>
#include <math.h>
 
#define PARTIE_ENTIERE 10
#define PARTIE_DECIMALE 12
 
int main(int argc, const char *argv[])
{
    long a = 123456;
    long b = 29;
    char q[PARTIE_ENTIERE+1+PARTIE_DECIMALE+1]={0};
 
    int entierreel = a/b;
    int entier = entierreel;
    int taille = 0;
    
    while(entier/10 != 0) // taille de la partie entiere
    {
        entier = entier /10;
        taille++;
    }
    taille += 1;

    q[PARTIE_ENTIERE - taille] = entier; // afficher le 1 er de la partie entiere

    while(taille != 1)
    {
        taille--;
        q[PARTIE_ENTIERE - taille] = entierreel % entier; // afficher le reste de la aprtie entiere
      
    }

    int reste = a%b;
    int index = PARTIE_ENTIERE;

    while(reste !=0 && index < PARTIE_DECIMALE+PARTIE_ENTIERE+1) //aficher virgule
    {
        q[index] = reste *10 / b;
        reste = (reste * 10) % b;
        index++;
    }
 
}
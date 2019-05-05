#include <stdio.h>
#include <stdlib.h>
#include "deuxieme.h"

int main()
{
    double longueur = 0;
    double largeur = 0;

    printf("Entrez la longueur du rectangle...");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle...");
    scanf("%lf", &largeur);
    printf("L'aire du rectangle vaut %f.\n", aireRectangle(longueur, largeur));
}

double aireRectangle(double longueur, double largeur)
{
    return longueur * largeur;
}


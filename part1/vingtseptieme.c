#include <stdio.h>
#include <stdlib.h>

double aireRectangle(double longueur, double largeur)
{
    return longueur * largeur;
}

int main()
{
    double longueur = 0;
    double largeur = 0;

    printf("Entrez la longueur du rectangle...");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle...");
    scanf("%lf", &largeur);

    printf("L'aire du rectangle est %f\n", aireRectangle(longueur, largeur));

    return 0;
}


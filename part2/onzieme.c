#include <stdio.h>
#include <stdlib.h>

void affiche(int *tableau, int tailleTableau);

int main()
{
    int tableau[4] = {10, 23, 3};

    //on affiche le contenu du tableau
    affiche(tableau, 4);

    return 0;
}

void affiche(int tableau[], int tailleTableau)
{
    int i;

    for(i = 0; i < tailleTableau; i++)
    {
        printf("%d\n", tableau[i]);
    }
}


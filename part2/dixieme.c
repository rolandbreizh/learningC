#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[4], i = 0;

    //initialisation du tableau
    for(i = 0; i < 4; i++)
    {
        tableau[i] = 0;
    }

    //affichage de ses valeurs pour verifier
    for(i = 0; i < 4; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}


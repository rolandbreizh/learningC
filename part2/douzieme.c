#include <stdio.h>
#include <stdlib.h>

void sommeTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau[4] = {10, 15, 8763};

    sommeTableau(tableau, 4);

    return 0;
}

void sommeTableau(int tableau[], int tailleTableau)
{
    int i;

    for(i = 0; i < tailleTableau; i++)
    {
        printf("%d\n", tableau[i]);
    }
}


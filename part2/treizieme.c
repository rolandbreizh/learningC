#include <stdio.h>
#include <stdlib.h>

double moyenneTableau(int tableau[], int tailleTableau);

int main()
{
    int tableau[5] = {132, 766, 9, 656, 87};

    moyenneTableau(tableau, 5);

    return 0;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i;

    i = (tableau[5] / tailleTableau);
    printf("%d\n", tableau[i]);
}

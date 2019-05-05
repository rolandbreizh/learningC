#include "treizieme.h"

int main()
{
    int tableau[5] = {132, 766, 9, 656, 87};
    printf("%f\n", moyenneTableau(tableau, 5));
    return 0;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    double tmp = tableau[0];
    for(int i = 0; i < tailleTableau; i++)
    {
        tmp = tmp + tableau[i];
    }
    tmp = tmp / tailleTableau;
    return tmp;
}

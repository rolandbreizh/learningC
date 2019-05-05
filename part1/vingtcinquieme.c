#include <stdio.h>
#include <stdlib.h>

double conversion(double francs)
{
    return francs / 6.55957;
}

int main()
{
    double nombreEntre = 0;

    printf("Entrez un montant à convertir...");
    scanf("%lf", &nombreEntre);

    printf("%lf francs = %f euros\n", nombreEntre, conversion(nombreEntre));

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes);

int main()
{
    int heures = 0, minutes = 90;

    decoupeMinutes(&heures, &minutes); //on envoie l'adresse de heures et minutes.

    printf("%d heures et %d minutes\n", heures, minutes);
    return 0;
}

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
}


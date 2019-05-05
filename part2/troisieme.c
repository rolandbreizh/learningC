#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int heures, int minutes);

int main()
{
    int heures = 0, minutes = 90;
    /*On a une variable minutes qui vaut 90. Apreès l'appel de la fonction,
    je veux que ma variable heure vaille 1 et que ma variable minutes vaille
    30*/

    decoupeMinutes(heures, minutes);
    printf("%d heures et %d minutes\n", heures, minutes);
    return 0;
}

void decoupeMinutes(int heures, int minutes)
{
    heures = minutes / 60; //Donc 90 / 60 = 1.
    minutes = minutes % 60; //Donc 90 % 60 = 30.
}


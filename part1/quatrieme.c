#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0; //on initialise la variable à zéro.
    double poids = 0; //on initialise la variable à zéro.

    printf("Quelle âge avez-vous ?\n");
        scanf("%d", &age); //on demande d'entrer l'âge avec scanf.
    printf("Quelle est votre poids ?\n");
        scanf("%lf", &poids); //on demande d'entrer le poids avec scanf.
    printf("Vous avez %d ans et pesez %lf kilogrammes.\n", age, poids);
    return 0;
}


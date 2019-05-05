#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultat = 0, nombre1 = 0, nombre2 = 0;

    //on demande les nombres 1 et 2 à l'utilisateur.

    printf("nombre 1 :");
    scanf("%d", &nombre1);
    printf("nombre 2 :");
    scanf("%d", &nombre2);

    //on fait le  calcul.

    resultat = nombre1 + nombre2;

    //et on affiche l'addition à l'écran.

    printf("%d + %d = %d\n", nombre1, nombre2, resultat);
    return 0;
}


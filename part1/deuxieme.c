#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreDeVies = 5; //Au départ, le joueur a cinq vies.
    printf("vous avez %d vies\n", nombreDeVies);
    printf("*** B A M ***\n"); //Là, il vient de se prendre un coup sur la tête
    nombreDeVies = 4; //Il vient de perdre une vie !
    printf("Ah désolé, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);
    return 0;
}


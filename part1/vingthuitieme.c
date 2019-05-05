#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int choix = 0;

    while(choix < 1 || choix > 4)
    {
        printf("=== Menu ===\n");
        printf("1: Filet de dinde aux escargots rotîs à la sauce béarnaise.\n");
        printf("2: Concombres sucres à la sauce de myrtilles enrobés de chocolat.\n");
        printf("3: Escalope de kangourou saignante et sa gelé aux fraises poivrées.\n");
        printf("4: La surprise du chef !\n");
        printf("Votre choix ?");
        scanf("%d", &choix);
    }

    return choix;

}

int main()
{
    switch(menu())
    {
        case 1:
            printf("\nvous avez pris le poulet.\n\n");
            break;

        case 2:
            printf("\nvous avez pris les concombres.\n\n");
            break;

        case 3:
            printf("\nvous avez l'escalope de kangourou.\n\n");
            break;

        case 4:
            printf("\nvous avez pris la surprise du chef ! vous aimez l'aventure !\n\n");
            break;
    }

    return 0;
}


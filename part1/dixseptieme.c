#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choixMenu;

    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mac Deluxe\n");
    printf("3. Mac Bacon\n");
    printf("4. Big Mac\n");
    scanf("%d", &choixMenu);

    printf("\n");

    switch(choixMenu)
    {
    case 1:
        printf("Ah vous avez choisi le Royal Cheese, bon choix !\n");
        break;
    case 2:
        printf("Ah non, pas le Mac Deluxe, trop de sauce !\n");
        break;
    case 3:
        printf("Mouais, passe encore...\n");
        break;
    case 4:
        printf("Oulà ! Le Big Mac ! Vous devez avoir faim !\n");
        break;
    default:
        printf("Vous n'avez pas rentré un nombre correct, vous ne mangerez donc rien !\n");
        break;
    }

    printf("\n\n");

    return 0;
}


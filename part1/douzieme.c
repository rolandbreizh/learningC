#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0, argents = 0;

    printf("Quelle est votre âge ?\n");
    scanf("%d", &age);
    printf("Combien avez-vous d'argent ?\n");
    scanf("%d", &argents);

    if(age >= 30 || argents >= 10000)
    {
        printf("Vous pouvez ouvrir un compte en banque... Bienvenue à la picsoubanque!\n");
        return 0;
    }

    else
    {
        printf("Hors de ma vue misérable !!!\n");
        return 0;
    }
}


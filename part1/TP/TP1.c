#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        printf("Quelle est le nombre ?\n");
        scanf("%d", &nombreEntre);

        if(nombreEntre == nombreMystere)
        {
            printf("C'est le bon nombre !\n\n");
            return 0;
        }
        else if(nombreEntre < nombreMystere)
        {
            printf("Cest plus !\n\n");
        }
        else
        {
            printf("Cest moins !\n\n");
        }
    }while(nombreEntre != nombreMystere);
}


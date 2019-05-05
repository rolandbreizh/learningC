#include <stdio.h>
#include <stdlib.h>

void punition(int nombreDeLigne)
{
    int i;

    for(i = 0; i < nombreDeLigne; i ++)
    {
        printf("Je ne dois pas recopier mon voisin.\n");
    }
}

int main()
{
    punition(10);

    return 0;
}


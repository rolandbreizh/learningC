#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 1;

    if(age >= 12) //si l'âge est supérieur ou égale à 12...
    {
        printf("Tu es un adolescent.\n");
    }

    else if( age >  3) //sinon si l'âge est au moins supérieur à 3...
    {
        printf("Tu es encore un enfant !\n");
    }

    else // sinon l'âge est inférieur à 3...
    {
        printf("Aga ga aga gaaa !\n"); // c'est du langage bébé...
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 15;

    if(age >= 18) //si l'âge est supérieur ou égale à 18...
    {
        printf("vous êtes majeurs !\n");
    }

    else //sinon...
    {
        printf("Ah c'est bête, vous êtes mineurs...\n");
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 40;

    switch(age)
    {
    case 2:
        printf("salut bébé.\n");
        break;
    case 6:
        printf("salut enfant.\n");
        break;
    case 12:
        printf("salut jeune.\n");
        break;
    case 16:
        printf("salut adolescent.\n");
        break;
    case 18:
        printf("salut adulte.\n");
        break;
    case 68:
        printf("salut papy.\n");
        break;
    default:
        printf("je n'ai pas de phrase pour ton cas.\n");
        break;
    }
}


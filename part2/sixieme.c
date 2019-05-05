#include <stdio.h>
#include <stdlib.h>

void triplePointeur(int *pointeurSurNombre);

int main()
{
    int nombre = 5;

    triplePointeur(&nombre);
    printf("%d\n", nombre);
    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3;
}


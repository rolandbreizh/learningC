#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[2];

    tableau[0] = 10;
    tableau[1] = 23;

    printf("%d\n", *(tableau + 1));
}


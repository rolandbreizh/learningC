#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 10;
    int *pointeurSurAge = &age;

    printf("%d\n", *pointeurSurAge);
}


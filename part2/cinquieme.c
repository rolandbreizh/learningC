#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int *pointeurSurAge = &age;

    printf("%d\n", *pointeurSurAge);
}


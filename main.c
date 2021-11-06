#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 0;
    y = 1;

    for(int i = 0; i <= 9; i++)
    {

        x = x + y;
        y = x - y;

        printf("El numero es: %i \n", x);

    }

    return 0;
}


#include <stdio.h>

void main()
{
    int x, y;

    printf("Polynomial: y = 2x^3 + 3x^2 + 4x + 5\n\n");

    for(x = 0; x <= 5; x++)
    {
        y = 2*x*x*x + 3*x*x + 4*x + 5;

        printf("x = %d, y = %d\n", x, y);
    }
}

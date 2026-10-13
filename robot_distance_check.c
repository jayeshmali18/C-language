
#include <stdio.h>

void main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        if(i <= 3)
            printf("Distance Level %d: Near\n", i);
        else
            printf("Distance Level %d: Far\n", i);
    }
}

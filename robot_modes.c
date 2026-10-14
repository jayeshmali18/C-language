#include <stdio.h>

void main()
{
    int mode = 2;

    switch(mode)
    {
        case 1:
            printf("Robot Mode: STOP");
            break;

        case 2:
            printf("Robot Mode: FORWARD");
            break;

        case 3:
            printf("Robot Mode: REVERSE");
            break;

        default:
            printf("Invalid Mode");
    }
}

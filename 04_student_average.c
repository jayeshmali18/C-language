#include <stdio.h>

void main()
{
    float maths, science, sst, average;

    printf("Enter Maths marks: ");
    scanf("%f", &maths);

    printf("Enter Science marks: ");
    scanf("%f", &science);

    printf("Enter SST marks: ");
    scanf("%f", &sst);

    average = (maths + science + sst) / 3;

    printf("Average marks = %.2f", average);
}

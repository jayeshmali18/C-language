#include <stdio.h>

void main()
{
    char name[50];
    float maths, science, sst, average;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter Maths marks: ");
    scanf("%f", &maths);

    printf("Enter Science marks: ");
    scanf("%f", &science);

    printf("Enter SST marks: ");
    scanf("%f", &sst);

    average = (maths + science + sst) / 3;

    printf("\nStudent Name: %s", name);
    printf("\nAverage Marks: %.2f", average);
}

#include <stdio.h>

void main()
{
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reversed number = %d", reverse);
}

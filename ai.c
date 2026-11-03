#include <stdio.h>

int main(void)
{
    int n;
    int hit = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error");
    }
    else if (n == 0)
    {
        printf("No");
    }
    else
    {
        if (n % 3 == 0)
        {
            printf("Up");
            hit = 1;
        }

        if (n % 5 == 0)
        {
            printf("Go");
            hit = 1;
        }

        if (n % 7 == 0)
        {
            printf("!!");
            hit = 1;
        }

        if (hit == 0)
        {
            printf("No");
        }
    }

    return 0;
}
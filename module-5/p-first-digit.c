#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int first_D = x / 1000;
    if (first_D % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}
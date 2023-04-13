#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        // choto hate --> convert to boro hater
        int result = c - 32;
        printf("%c\n", result);
    }
    else
    {
        // boro hate --> convert to choto hater
        int result = c + 32;
        printf("%c\n", result);
    }

    return 0;
}
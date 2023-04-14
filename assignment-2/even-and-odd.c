#include <stdio.h>

int main()
{
    int n, v, e = 0, o = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v);
        if (v % 2 == 0)
        {
            e += v;
        }
        else
        {
            o += v;
        }
    }
    printf("%d %d \n", e, o);
    return 0;
}
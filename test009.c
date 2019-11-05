#include <stdio.h>
int main(void)
{
    int t, a;
    printf("Enter t:\n");
    scanf("%d", &t);
    if (t % 4 == 0 && t % 100 != 0)
    {
        a = 1;
    }
    else if (t % 400 == 0)
    {
        a = 1;
    }
    else
    {
        a = 0;
    }
    printf("a=%d\n", a);
    return 0;
}
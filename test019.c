#include <stdio.h>
#define len 5
int main(void)
{
    int a[len], i;
    printf("Enter array a:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < len; i++)
    {
        printf("%5d", a[i]);
    }

    return 0;
}
#include <stdio.h>
int main(void)
{
    int n, term = 1;
    int i;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = term * i;
    }
    printf("%d! is %d\n",n, term);
    return 0;
}
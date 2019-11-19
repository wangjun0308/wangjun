#include <stdio.h>
int main(void)
{
    int n, i;
    float sum = 0, term = 1;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        term = term / i;
        sum += term;
    }
    sum = sum + 1;
    printf("sum is %f\n", sum);
    return 0;
}
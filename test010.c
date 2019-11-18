#include <stdio.h>
int main(void)
{
    int i, term = 1,sum=0;
    for (i = 1; i <= 5; i++)
    {
        term = term * i;
        sum=sum+term;
    }
    printf("sum is %d\n", sum);
    return 0;
}
#include<stdio.h>
int main(void)
{
    int n,i;
    for(n=2;n<=500;n++)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    printf("%d",n);

    return 0;
}
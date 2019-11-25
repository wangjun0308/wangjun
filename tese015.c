#include<stdio.h>
#include<math.h>
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
    if(i==n)
    {
        printf("yes!\n");
    }
    else
    {
        printf("no!\n");
    }
    }
    return 0;
}
#include<stdio.h>
int main(void)
{
    int a,b,c,i;
    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=(i-a*100)/10;
        c=i%10;
        if(i==a*a*a+b*b*b+c*c*c)
        printf("i is %d\n",i);
    }
    return 0;
}
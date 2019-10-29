#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    float sum ,i;
    printf("Enter a,b,c,d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    i=(sum/4.0*10.0)/10.0;
    printf("sum=%1f, i=%1f\n",sum,i);
    return 0;
}
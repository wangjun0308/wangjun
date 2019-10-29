#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    float s,i;
    printf("Enter a,b,c,d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=a+b+c+d;
    i=(s/4.0);
    printf("s=%1f, i=%1f\n",s,i);
    return 0;
}
#include<stdio.h>
int main(void)
{
    int f1=1,f2=1,n,f3;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("%d %d\n",f1,f2);
    for(int i=3;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d ",f3);
    }
    printf("\n");

    return 0;
}
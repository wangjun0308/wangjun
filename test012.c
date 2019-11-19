#include<stdio.h>
int main(void)
{
    int n,i,m=1;
    float t,sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m=m*i;
        t=1.0/m;
        sum+=t;
    }
    sum=sum+1;
    printf("sum is %f\n",sum);
    return 0;

}
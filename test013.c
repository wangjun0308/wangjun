#include<stdio.h>
int main(void)
{
    int n,sum;
    float a=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        n=n/10;
        sum+=a;

    }
    printf("sum is %d\n",sum);

    return 0;
}
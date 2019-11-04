#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(n>=0){
        n=n;
    }
    else{
        n=-n;
    }
    printf("|n| = %d",n);

    return 0;
}
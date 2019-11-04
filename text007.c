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
    printf("%d",n);

    return 0;
}
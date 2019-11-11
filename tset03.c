#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(n<60&&n>0){
        printf("E");

    }else if(n<70){
        printf("D");

    }else if(n<=80){
        printf("C");

    }else if(n<=90){
        printf("B");

    }else (n<=100){
        printf("A");
    }    
    return 0;
}